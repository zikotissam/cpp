/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:40:54 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/23 03:42:28 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account() {
    _totalAmount -= _amount;
    _nbAccounts--;
}
int		Account::checkAmount( void ) const{
	return(_amount);
}

void	Account::makeDeposit( int deposit ){
	_nbDeposits++;
	_amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal ){
	if(checkAmount() - withdrawal < 0)
		return false;
	_amount -= withdrawal;
	_nbWithdrawals++;
	return true;
}
void	Account::displayStatus( void ) const{
	std::cout<<"index:"<<_accountIndex<<';';
	std::cout<<"amount:"<<_amount<<';';
	std::cout<<"deposits:"<<_nbDeposits<<';';
	std::cout<<"withdrawals:"<<_nbWithdrawals<<';'<<std::endl;
}
int	Account::getNbAccounts( void ){
	return(_nbAccounts);
}
int	Account::getTotalAmount( void ){
	return(_totalAmount);
}
int	Account::getNbDeposits( void ){
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
	return(_totalNbWithdrawals);
}
void Account::displayAccountsInfos( void ){
	std::cout<<"acounts:"<<Account::getNbAccounts()<<';';
	std::cout<<"total:"<<Account::getTotalAmount()<<';';
	std::cout<<"deposits:"<<Account::getNbDeposits()<<';';
	std::cout<<"withdrawals:"<<Account::getNbWithdrawals()<<';'<<std::endl;
}

Account::Account( int initial_deposit ){
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}
