/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 11:14:45 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/02 11:14:49 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.class.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals();
	std::cout << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_nbCheckAmount = 0;
	Account::_displayTimestamp();
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" << checkAmount();
	std::cout << ";nb_deposits:1" << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal) {
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	else {
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalNbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << checkAmount();
		std::cout << ";nb_withdrawals:1" << std::endl;
		return (1);
	}
}

int		Account::checkAmount( void ) const
{
	this->_nbCheckAmount++;
	return (this->_amount);
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << ";nbCheckAmount:" << this->_nbCheckAmount << std::endl;
}

Account::Account()
{
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer [16];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,80,"%Y%m%d_%H%M%S",timeinfo);

	std::cout << "[" << buffer << "] ";
	return;
}
