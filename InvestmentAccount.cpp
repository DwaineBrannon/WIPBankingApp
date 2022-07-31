#include "InvestmentAccount.h"
#include "Account.h"
using namespace std;

//Constructor for no monthly deposit
	InvestmentAccount::InvestmentAccount(string userName, string address, int accountNumber, string accountType,
		DoubleWrapper * initialAmount, DoubleWrapper * annualInterestRate) :
		Account(userName, address, accountNumber, accountType) //Calling the parent class constructor
	{
		userName = getUserName();
		address = getAddress();
		accountNumber = getAccountNumber();
		accountType = getAccountType();
		initialAmount = getInitialAmount();
		annualInterestRate = getAnnualInterestRate();
		monthlyDeposit = 0;
	}
//Constructor for with monthly deposit
	InvestmentAccount::InvestmentAccount(string userName, string address, int accountNumber, string accountType,
		DoubleWrapper * initialAmount, DoubleWrapper * annualInterestRate, DoubleWrapper * monthlyDeposit) :
		Account(userName, address, accountNumber, accountType) //For monthly deposit
	{
		userName = getUserName();
		address = getAddress(); 
		accountNumber = getAccountNumber();
		accountType = getAccountType();
		initialAmount = getInitialAmount();
		annualInterestRate = getAnnualInterestRate();
		monthlyDeposit = getMonthlyDeposit();

	}

	double InvestmentAccount::getEndingBalance(int numberOfYears)
	{//ending balance should for with and without monthly deposits. 
	 //ending balance would be ((initialAmount + monthlyDeposit) * (annualInterestRate/100)) * numberOfYears
		double endingBalance;
		
		
		return endingBalance;
	}

	double InvestmentAccount::getInterestEarned(int numberOfYears)
	{
		return 0.0;
	}

	string InvestmentAccount::getAccountDetails()
	{
		return string();
	}

	DoubleWrapper* InvestmentAccount::getInitialAmount()
	{
		return initialAmount;
	}

	DoubleWrapper* InvestmentAccount::getMonthlyDeposit()
	{
		return nullptr;
	}

	DoubleWrapper* InvestmentAccount::getAnnualInterestRate()
	{
		return nullptr;
	}
