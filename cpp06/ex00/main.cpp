/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:27:20 by ygbouri           #+#    #+#             */
/*   Updated: 2023/05/21 04:36:52 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string.h>

void displayTypes(int nbr)
{
   std::cout << "int : " << nbr << std::endl;
   float f = static_cast<float>(nbr);
   double d = static_cast<double>(nbr);
   std::cout << std::fixed << "float : " << f << "f" << std::endl;
   std::cout << std::fixed << "double : " << d << std::endl;
}

void   floatDesplay(std::string str)
{
	float f = stof(str);
	double d = static_cast<double> (f);
	int i = static_cast<int>(f);
	if (i < 32 || i > 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		
	}
	else
	{
		char c = static_cast<char>(i);
		std::cout << "char: " << c << std::endl;
	}
	
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << "float: " << f << "f"<< std::endl;
	std::cout << std::fixed << "double: " << d << std::endl;
}

void doubleDesplay(std::string str)
{
	double d = stod(str);
	float f = static_cast<float>(d);
	int i = static_cast<int>(f);
	if (i < 32 || i > 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		
	}
	else
	{
		char c = static_cast<char>(i);
		std::cout << "char: " << c << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << "float: " << f << "f"<< std::endl;
	std::cout << std::fixed << "double: " << d << std::endl;
}

void displayInt(std::string str)
{
	int i = stoi(str);
	float f = static_cast<float>(i);
	double d = static_cast<double>(f);
	if (i < 32 || i > 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		
	}
	else
	{
		char c = static_cast<char>(i);
		std::cout << "char: " << c << std::endl;
	}
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << "float: " << f << "f" << std::endl;
	std::cout << std::fixed << "double: " << d << "" <<std::endl;
}

void affichNan()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "nanf" << std::endl;
	std::cout << "double: " << "nan" << std::endl;
	
}

void affichInffM()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "-inff" << std::endl;
	std::cout << "double: " << "-inf" << std::endl;
	
}

void affichInffP()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "+inff" << std::endl;
	std::cout << "double: " << "+inf" << std::endl;
	
}

void affichInffDm()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "-inff" << std::endl;
	std::cout << "double: " << "-inf" << std::endl;
	
}

void affichInffDp()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "+inff" << std::endl;
	std::cout << "double: " << "+inf" << std::endl;
	
}



void checkArgumentsTwo(std::string str)
{
	int i;
	if (str.length() > 1)
	{
		i = str.find(".");
		if ((str.c_str()[i + 1] < '0' || str.c_str()[i + 1] > '9') && str.c_str()[i + 1] != '\0')
		{
			std::cout << "error" << std::endl;
			exit(0);
		}
		if (i != (int)std::string::npos)
		{
			for (int j = 0; j < i; j++)
			{
				if (str.c_str()[j] >= 48 && str.c_str()[j] <= 57)
					j++;
				else
				{
					i = -1;
					break;
				}
			}
			if (i != -1)
			{

				for(int j = i; j < (int)str.length() - 2; j++)
				{
					if (str.c_str()[i] >= 48 && str.c_str()[i] <= 57)
						j++;
					else
					{
						i = -1;
						break;
					}
				}
				if (str.c_str()[str.length() - 1] == 'f')
				{
					floatDesplay(str);
				}
				else if ((str.c_str()[str.length() - 1] >= '0' && str.c_str()[str.length() - 1] <= '9') || (str.c_str()[str.length() - 1]))
				{
					doubleDesplay(str);
				}
			}
		}
		else
		{
			int j;
			for (j = 0; j < (int)str.length(); j++)
			{
				if (str.c_str()[j] < '0' || str.c_str()[j] > '9')
					break;
			}
			if (j == (int)str.length())
			{
				displayInt(str);
			}
		}
		
	}
}

void checkArguments(std::string str)
{
	int nbr;
	if (str.length() == 1)
	{
		try
		{
			if(str.c_str()[0] >= '0' && str.c_str()[0] <='9')
				nbr = stoi(str, 0, 10);
			else
				nbr = static_cast<int>(str.c_str()[0]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			exit(0);
		}
		
		if (nbr < 32 || nbr > 127)
		{
			std::cout << "char: Non displayable" << std::endl;
			displayTypes(nbr);
		}
		else
		{
			char c = static_cast<char>(nbr);
			std::cout << "char: " << c << std::endl;
			displayTypes(nbr);
		}
	}
	else if (str.length() > 1)
		checkArgumentsTwo(str);
}

void handlLitera(std::string str)
{
	if (str.compare("nan") == 0)
	{
		affichNan();
		exit(0);
	}
	else if (str.compare("-inff") == 0)
	{
		affichInffM();
		exit(0);
	}
	else if (str.compare("+inff") == 0)
	{
		affichInffP();
		exit(0);
	}
	else if (str.compare("-inf") == 0)
	{
		affichInffDm();
		exit(0);   
	}
	else if (str.compare("+inf") == 0)
	{
		affichInffDp();
		exit(0);   
	}
	
}
int main(int ar, char **arg)
{
	if (ar == 2)
	{
		std::string str  = arg[1];
		handlLitera(str);
		checkArguments(str);
	}
	else
		std::cout << "shloud be enter 2 arguments" << std::endl;
}
