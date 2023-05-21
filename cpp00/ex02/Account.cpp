/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:19:16 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/10 18:17:01 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	static int i = 0;
	this->_accountIndex = i++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	setTotalAmount (this->_amount + getTotalAmount());
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts++;
}

void Account::_displayTimestamp( void )
{
	struct timeval tv;
	time_t t;
	struct tm *info;
	char buffer[64];

	gettimeofday(&tv, NULL);
	t = tv.tv_sec;
	info = localtime(&t);
	strftime (buffer, sizeof buffer, "[%Y%m%d_%H%M%S]", info);
	std::cout << buffer;
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::setNbAccounts(int nbacc)
{
	_nbAccounts = nbacc;
}

void	Account::setTotalAmount(int totalamount)
{
	_totalAmount = totalamount;
}

void	Account::setNbDeposits(int nbdeposit)
{
	_totalNbDeposits = nbdeposit;
}

void	Account::setNbWithdrawals(int nbwithdrawal)
{
	_totalNbWithdrawals = nbwithdrawal;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits++;
	std::cout << " index:" << _accountIndex << ";p_amount:" << this->_amount <<  ";deposit:"<< deposit <<";amount:"<< this->_amount + deposit <<";nb_deposits:"<< this->_nbDeposits << std::endl;
	this->_amount += deposit;
	_totalAmount += this->_amount;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	static int i =0;
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals++;
		std::cout << " index:" << _accountIndex << ";p_amount:" << this->_amount <<  ";withdrawal:"<< withdrawal <<";amount:"<< this->_amount - withdrawal <<";nb_withdrawals:"<< this->_nbWithdrawals << std::endl;
		this->_amount -= withdrawal;
		setNbWithdrawals(_totalNbWithdrawals + 1);
		setTotalAmount (this->_amount + getTotalAmount());
		return (true);
	}
	setTotalAmount (this->_amount + getTotalAmount());
	std::cout << " index:" << _accountIndex << ";p_amount:" << this->_amount <<  ";withdrawal:refused"<< std::endl;
	return (false);
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount()<< ";deposits:"<< getNbDeposits()<< ";withdrawals:"<< getNbWithdrawals() <<std::endl;
	setTotalAmount (0);
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << this->_amount <<  ";deposits:"<< this->_nbDeposits <<";withdrawals:"<< this->_nbWithdrawals << std::endl;
}

int	Account::checkAmount() const
{
	return this->_amount;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex  << ";amount:" << _amount <<  ";closed"<< std::endl;
}
