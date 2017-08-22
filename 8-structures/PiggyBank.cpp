#include <iostream>
#include "PiggyBank.h"

using namespace std;

float calcPiggyBankNotes(bank piggy)
{
	float one;
	float two;
	float five;
	float total;

	one = piggy.dollar;
	two = piggy.twoDollar * 2;
	five = piggy.fiveDollar * 5;



	total = one + two + five;
	return total;
}

float calcPiggyBankCoins(bank piggy)
{
	float pen;
	float nick;
	float dim;
	float quart;
	float tot;

	pen = piggy.pennies * .01;
	nick = piggy.nickles * .05;
	dim = piggy.dime * .1;
	quart = piggy.quarter * .25;

	tot = pen + nick + dim + quart;
	return tot;
}

float calcPiggyBankTotal(bank piggy)
{
	float TrueTotal;

	TrueTotal = calcPiggyBankCoins(piggy) + calcPiggyBankNotes(piggy);

	return TrueTotal;
}
