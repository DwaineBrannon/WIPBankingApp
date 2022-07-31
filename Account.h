#pragma once

#include <string>
#include <cmath>
#include "DoubleWrapper.h"

class Account
{
public:
	Account(string userName, string address, int accountNumber, string accountType);
	virtual double getEndingBalance(int numberOfYears) = 0;
	virtual double getInterestEarned(int numberOfYears) = 0;
	virtual string getAccountDetails() = 0;
	string getUserName();
	string getAddress();
	int getAccountNumber();
	string getAccountType();


protected:
	string userName;
	string address;
	int accountNumber;
	string accountType;	

};

