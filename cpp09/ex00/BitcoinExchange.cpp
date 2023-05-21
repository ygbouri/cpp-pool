/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:54:17 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/14 02:51:41 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string trim(std::string str, const char * space)
{
    str.erase(str.find_last_not_of(space) + 1);
    str.erase(0, str.find_first_not_of(space));
    return str;
}


std::map<std::string , std::string> filldatafdatacsv()
{
	std::ifstream data;
	std::string line;
	std::map<std::string , std::string> datacsv;
	int yg = 0;
	data.open("./data.csv");
	if (data.is_open())
	{
		while(std::getline(data, line))
		{
			if (yg != 0)
			{
				datacsv.insert(std::pair<std::string , std::string>(line.substr(0,10), line.substr(11, line.length())));
			}
			yg++;
		}
		return (datacsv);
	}
	std::cout << "Error: could not open file\ndata.csv not exist"<< std::endl;
	exit (0);
}

int parsemonth2(std::string year, std::string month, std::string day)
{
	int y = std::atof(year.c_str());
	if ((y % 4) == 0)
	{
		if ((std::atof (day.c_str()) < 0) || (std::atof(day.c_str()) > 29))
			return(0);
	}
	else
	{
		if ((std::atof(day.c_str()) < 0) || (std::atof(day.c_str()) > 28))
			return (0);
	}
	return (1);
}

int parsemonthsanddays(std::string year, std::string month, std::string day)
{
	if ( ((std::atof(month.c_str()) < 0) || (std::atof(month.c_str())) > 12))
	{
		std::cout << "Error: bad input" << std::endl;
		return (0);
	}
	if (std::atof(month.c_str()) >= 1 && std::atof(month.c_str()) <= 7)
	{
		if (std::atof(month.c_str()) == 2)
		{
			if (parsemonth2(year , month , day) == 0)
			{
				std::cout << "Error: bad input" << std::endl;
				return (0);
			}
		}
		else
		{
			int m = std::atof(month.c_str());
			if ((m % 2) == 0)
			{
				if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 30)
				{
					std::cout << "Error: bad input" << std::endl;
					return(0);
				}
			}
			else
			{
				if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 31)
				{
					std::cout << "Error: bad input" << std::endl;
					return(0);
				}
			}
		}
	}
	else if (std::atof(month.c_str()) >= 8 && std::atof(month.c_str()) <= 12)
	{
		int m = std::atof(month.c_str());
		if ((m % 2) == 0)
		{
			if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 31)
			{
				std::cout << "Error: bad input" << std::endl;
				return(0);
			}
		}
		else
		{
			if (std::atof(day.c_str()) < 0 || std::atof(day.c_str()) > 30)
			{
				std::cout << "Error: bad input" << std::endl;
				return(0);
			}
		}
	}
	return (1);
}

int checkdateandvalue2(std::string year, std::string month ,std::string day, std::string value)
{
	if (year.length() != 4)
	{
		std::cout << "Error: bad input" <<std::endl;
		return(0);
	}
	else if (month.length() != 2)
	{
		std::cout << "Error: bad input" <<std::endl;
		return(0);
	}
	else if (day.length() != 2)
	{
		std::cout << "Error: bad input" <<std::endl;
		return(0);
	}
	if (parsemonthsanddays(year, month, day) == 0)
		return (0);
	if (std::atof(value.c_str()) < 0 || std::atof(value.c_str()) > 1000)
	{
		if (std::atof(value.c_str()) > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else
			std::cout << "Error: not a positive number." << std::endl;
		return (0);
	}
	
	return (1);
}

int	checkdateandvalue(std::map<std::string , std::string > datacsv, std::string date, std::string value, int j)
{
	std::string year, month, day, pipe;
	std::size_t cherch = date.find('-');
	year = date.substr(0, cherch);
	pipe = date.substr(cherch + 1, date.length());
	cherch = pipe.find('-');
	month = pipe.substr(0, cherch);
	day = pipe.substr(cherch + 1, pipe.length());
	value = trim(value, " \t\n\r\f\v");
	year = trim(year, " \t\n\r\f\v");
	month = trim(month, " \t\n\r\f\v");
	day = trim(day, " \t\n\r\f\v");
	
	for (int i = 0; i < value.length(); i++)
	{
		if (value.c_str()[1] == '-')
		{
			std::cout << "Error: bad input" <<std::endl;
			return(0);
		}
		if (value.c_str()[0] == '-')
			continue;
		if (j == 1 && value.c_str()[i] == '.')
			continue;
		if (isdigit(value.c_str()[i]) == 0)
		{
			std::cout << "Error: bad input" <<std::endl;
			return(0);
		}
	}
	for (int i = 0; i < year.length(); i++)
	{
		if (isdigit(year.c_str()[i]) == 0)
		{
			std::cout << "Error: bad input" <<std::endl;
			return(0);
		}
	}
	for (int i = 0; i < month.length(); i++)
	{
		if (isdigit(month.c_str()[i]) == 0)
		{
			std::cout << "Error: bad input" <<std::endl;
			return(0);
		}
	}
	for (int i = 0; i < day.length(); i++)
	{
		if (isdigit(day.c_str()[i]) == 0)
		{
			std::cout << "Error: bad input" <<std::endl;
			return(0);
		}
	}
	if (checkdateandvalue2(year, month ,day, value) == 0)
		return (0);
	std::string dateparse =  year.append("-");
	dateparse.append(month.append("-"));
	dateparse.append(day);
	std::map<std::string , std::string>::iterator it, it1;
	it = datacsv.lower_bound(dateparse);
	it1 = datacsv.begin();
	if (it->first == dateparse)
	{
		std::cout << it->first << " => " << value << " = " << std::fixed << std::setprecision(5) << std::stod(value) * std::stod(it->second) << std::endl;
	}
	else
	{
		if (std::atof(year.c_str()) >= std::atof(it1->first.substr(0,4).c_str()) && std::atof(month.c_str()) >= std::atof(it1->first.substr(5,2).c_str()) && std::atof(day.c_str()) > std::atof(it1->first.substr(8,2).c_str()))
		{
			--it;
		}
		std::cout << it->first << " => " << value << " = " << std::fixed << std::setprecision(5) << std::atof(value.c_str()) * std::atof(it->second.c_str()) << std::endl;
	}
	return(1);
}

int bitcoin(int ar, char** arg)
{
	std::string namefile;
	std::ifstream input;
	int j;
	char **str;
	std::map<std::string , std::string> datacsv;
	std::map<std::string, std::string>::iterator it;
	datacsv = filldatafdatacsv();
	namefile = arg[1];
	input.open(namefile);
	if (input.is_open())
	{
		std::string line, date ,value ,year, month, day;
		char  **yyyymmdd;
		int i = 0;
		while (std::getline(input, line))
		{
			line = trim(line , " \t\n\r\f\v");
			if (i != 0 && line == "date | value")
			{
				std::cout << "Error: bad input\n";
				continue;
			}
			else if ( i == 0 && line == "date | value")
				i++;
			else
			{
				std::size_t cherch = line.find('|');
				if (cherch == std::string::npos)
				{
					std::cout << "Error: bad input => " << line << std::endl;
					continue;
				}
				else
				{
					std::string pipe = line.substr(cherch + 1, line.length());
					cherch = pipe.find('|');
					if (cherch != std::string::npos)
					{
						std::cout << "Error: bad input =>" << line << std::endl;
						continue;
					}
					cherch = line.find('|');
					date = line.substr(0, cherch);
					value = line.substr(cherch + 1, line.length());
					value = trim(value, " \t\n\r\f\v");
					if (value.length() == 0)
					{
						std::cout << "Error: bad input =>" << line << std::endl;
						continue;
					}
					cherch = date.find('-');
					if (cherch == std::string::npos)
					{
						std::cout << "Error: bad input => " << date << std::endl;
						continue;
					}
					pipe = date.substr(cherch + 1, date.length());
					cherch = pipe.find('-');
					if (cherch == std::string::npos)
					{
						std::cout << "Error: bad input => " << date << std::endl;
						continue;
					}
					pipe = pipe.substr(cherch + 1, date.length());
					cherch = pipe.find('-');
					if (cherch != std::string::npos)
					{
						std::cout << "Error: bad input => " << date << std::endl;
						continue;
					}
					cherch = value.find('.');
					if (cherch != std::string::npos)
					{
						pipe = value.substr(cherch + 1, value.length());
						cherch = pipe.find('.');
						if (cherch != std::string::npos)
						{
							std::cout << "Error: bad input => " << value << std::endl;
							continue;
						}
						j = 1;
					}
					if (checkdateandvalue(datacsv, date, value, j) == 0)
						continue;
				}
			}
		}
	}
	else
		std::cout << "Error: could not open file" << std::endl;
	return (0);
}