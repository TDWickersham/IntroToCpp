#include <iostream>

using namespace std;

int main()
{
	bool lie = true;

	if (lie)
	{
		cout << "I have believed your lie" << endl;
	}

	cout << endl;

	int grade = 90;

	cout << "what is your grade? ";
	cin >> grade;
	cout << endl;

	if (grade > 50 && grade <= 100)
	{
		cout << "You passed" << endl;
	}
	else if (grade >= 0 && grade <= 50)
	{
		cout << "You Failed!!!!!" << endl;
	}
	else
	{
		cout << "HOOOOOOOOOOWWWW!!!!!!!!!" << endl;
	}
	
	cout << endl;

	int num = 0;

	cout << "Please input a number between 1 and 100: ";
	cin >> num;
	cout << endl;

	if (num > 50 && num <= 100)
	{
		cout << "You chose " << num << ". It is on the larger scale" << endl;
	}
	else if (num >= 1 && num < 50)
	{
		cout << "You chose " << num << ". It is on the smaller scale" << endl;
	}
	else if (num == 50)
	{
		cout << "You chose " << num << ". This the middle balancer" << endl;
	}
	else
	{
		cout << "I said between 1 and 100. You lose" << endl;
	}

	cout << endl;

	int age = 0;

	cout << "What is your age? ";
	cin >> age;
	cout << endl;

	if (age < 18 && age >= 0)
	{
		cout << "You are a minor, you dont apply." << endl;
	}
	else if (age >= 18 && age <= 150)
	{
		cout << "You are an adult" << endl;
		if (age >= 50)
		{
			cout << "You are eligible for AARP." << endl;
		}
		else if (age >= 65)
		{
			cout << "You are eligible for retirement benefits." << endl;
		}
	}
	else
	{
		cout << "How are you even alive?" << endl;
	}

	cout << endl;

	int a;
	int b;
	int c;

	cout << "Please give me 3 numbers ";
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin >> c;
	cout << endl;

	if (a <= b && c)
	{
		cout << a << " is the smallest" << endl;
	}
	else if (b <= a && c)
	{
		cout << b << " is the smallest" << endl;
	}
	else if (c <= a && b)
	{
		cout << c << " is the smallest" << endl;
	}

	cout << endl;

	int numA;
	bool odd = false;
	bool even = false;

	cout << "input a number: ";
	cin >> numA;
	cout << endl;

	int outcome = numA % 2;

	if (outcome != 0)
	{
		odd = true;
	}
	else
	{
		even = true;
	}
	if (even)
	{
		cout << "It is even" << endl;
	}
	else if (odd)
	{
		cout << "it is odd" << endl;
	}
	// assisted and help from WyattG
	
	cout << endl;

	int clamp = 0;

	cout << "Input a number ";
	cin >> clamp;
	cout << endl;

	if (clamp > 15 && clamp < 30)
	{
		cout << clamp << endl;
	}
	else if (clamp <= 15)
	{
		cout << 15 << endl;
	}
	else if (clamp >= 30)
	{
		cout << 30 << endl;
	}

	cout << endl;


	system("pause");
}