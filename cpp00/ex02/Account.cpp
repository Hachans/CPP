/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 17:37:53 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/25 13:01:49 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <string>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
	
{
	Account::_displayTimestamp();
	
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << Account::_amount << ';';
	std::cout << "created" << std::endl;
	_nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account(void){
	Account::_displayTimestamp();
	
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << Account::_amount << ';';
	std::cout << "closed" << std::endl;
}

void	Account::_displayTimestamp(void){
	std::time_t now = time(0);
	std::tm *ltm = localtime(&now);
	
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << '0' << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday << '_';
	if (ltm->tm_hour < 10) {std::cout << '0';}
	std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10) {std::cout << '0';}
	std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10) {std::cout << '0';}
	std::cout << ltm->tm_sec;
	std::cout << "] ";
}

void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	
	std::cout << "accounts:" << Account::getNbAccounts() << ';';
	std::cout << "total:" << Account::getTotalAmount() << ';';
	std::cout << "deposits:" << Account::getNbDeposits() << ';';
	std::cout << "withdrawals:" << Account::getNbWithdrawals()  << std::endl;
}

int Account::getNbAccounts(void){
	return _nbAccounts;
}

int Account::getTotalAmount(void){
	return _totalAmount;
}

int Account::getNbDeposits(void){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
	return _totalNbWithdrawals;
}

void	Account::makeDeposit(int deposit){
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "p_amount:" << _amount << ';';
	std::cout << "deposit:" << deposit << ';';
	_amount += deposit;
	std::cout << "amount:" << _amount << ';';
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	
	bool x = 0;
	
	if (_amount - withdrawal > 0){
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		x = 1;
	}
	else{
		x = 0;
	}
	if (x){
		Account::_displayTimestamp();
		std::cout << "index:" << Account::_accountIndex << ';';
		std::cout << "p_amount:" << _amount << ';';
		std::cout << "withdrawal:" << withdrawal << ';';
		_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << _amount << ';';
		std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else{
		Account::_displayTimestamp();
		std::cout << "index:" << Account::_accountIndex << ';';
		std::cout << "p_amount:" << Account::_amount << ';';
		std::cout << "withdrawal:refused" << std::endl;
	}
	return x;
}

int		Account::checkAmount( void ) const{
	return _totalAmount;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	
	std::cout << "index:" << Account::_accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "deposits:" << Account::_nbDeposits << ';';
	std::cout << "withdrawals:" << Account::_nbWithdrawals << std::endl;
}
