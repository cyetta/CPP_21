/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:11:44 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/17 16:00:03 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ){
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::Account(){
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount <<";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
	return Account::_amount;
}

void	Account::_displayTimestamp( void ){
	const time_t tm = time(nullptr);
	char buffer[80];
	strftime(buffer, 80, "%Y%m%d_%H%M%S", localtime(&tm));
	std::cout << "[" << buffer << "] ";
}


void Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal < this->_amount){
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:";
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout << this->_amount << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
		return (true);
	}else{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
}