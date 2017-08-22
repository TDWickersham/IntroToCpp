#pragma once


struct bank
{
	int dollar;
	int twoDollar;
	int fiveDollar;
	int quarter;
	int dime;
	int nickles;
	int pennies;
};

float calcPiggyBankNotes(bank piggy);

float calcPiggyBankCoins(bank piggy);

float calcPiggyBankTotal(bank piggy);