/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 21:48:51 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/22 18:09:01 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void )
{
	std::time_t time = std::time(NULL);
	std::tm	*current_time = std::localtime(&time);
	char buffer[20];
	std::strftime(buffer, 20, "[%Y%m%d_%H%M%S]", current_time);
	std::cout << buffer << " ";
}

int Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  <<  std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<< "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::Account( void )
{
	this->_accountIndex = Account::_nbAccounts - 1;
	Account::_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 1;
	Account::_totalNbDeposits++;
	this->_nbWithdrawals = 0;
	std::cout<< "index:" << this->_accountIndex << ";amount:0;created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex << "; amount:" << this->_amount << ";closed" << std::endl;
}

void    Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout  << "index:" << this->_accountIndex << ";p_amount:"  <<  this->_amount;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	std::cout  <<  ";deposit:" << deposit <<  ";amount:" << this->_amount  << ";nb_deposits:"  << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
 	std::cout  << "index:" << this->_accountIndex << ";p_amount:"  <<  this->_amount;
	if (withdrawal <= 0 || this->_amount < withdrawal)
	{
		std::cout  << ";withdrawal:refused"  << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	std::cout  <<  ";withdrawal:" << withdrawal <<  ";amount:" << this->_amount  << ";nb_withdrawals:"  << this->_nbWithdrawals << std::endl;
	return (true);
}

int     Account::checkAmount( void ) const
{
	return (this->_amount);
}

void    Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
}
