#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
  std::cout << "[19920104_091532] ";
}

Account::Account( int initial_deposit ): _amount(initial_deposit) {
  _displayTimestamp();
  _accountIndex = _nbAccounts;
  _totalAmount += _amount;
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
  _nbAccounts++;
}

Account::~Account(){
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void Account::displayAccountsInfos() {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit ) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<  ";deposit:" << deposit << ";";
  _amount += deposit;
  _totalAmount += deposit;
  _nbDeposits++;
  _totalNbDeposits++;
  std::cout << "amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal ) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount <<  ";";
  if (withdrawal > _amount) {
    std::cout << "withdrawal:refused" << std::endl;
    return false;
  }
  _amount -= withdrawal;
  _totalAmount -= withdrawal;
  _nbWithdrawals++;
  _totalNbWithdrawals++;
  std::cout << "withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
  return true;
}