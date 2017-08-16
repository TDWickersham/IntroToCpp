#include <iostream>

using namespace std;

void PrintHello()
{
	cout << "hello functions" << endl;
}

int SquareOfTwoNum(int a)
{
	cout << "Please give a number ";
	cin >> a;
	cout << endl;

	return a * a;

}

float fractions(int c, int d)
{
	float one = c;
	float two = d;

	return one / two;
}

float difference(float a, float b, float c)
{
	float one = 0;
	float two = 0;
	float three = 0;
	if (a - b > a - c && a - b > b - c)
	{
		 one = a - b;
		/*return */
	}
	if (a - c > a - b && a - c > b - c)
	{
		 two = a - c;
	}
	if (b - c > a - b && b - c > a - c)
	{
		three = b - c;
	}

	if (one > two && one > three)
	{
		return one;
	}
	else if (two > one && two > three)
	{
		return two;
	}
	else if (three > one && three > two)
	{
		return three;
	}
}

int Pair(int a, int b)
{
	cout << a << ", " << b << endl;

	return a, b;
}

int SumNum(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	int a = 0;
	int b = 0;
	PrintHello();

	b = SquareOfTwoNum(a);
	cout << b << endl;

	int d;
	int sum;
	cout << "Please give a number ";
	cin >> sum;
	cout << endl;

	cout << "Another one ";
	cin >> d;
	cout << endl;
	float c = fractions(sum, d);
	
	cout << c << endl;

	cout << endl;

	float i;
	float j;
	float l;
	cout << "enter a float ";
	cin >> i;
	cout << endl;

	cout << "The second float ";
	cin >> j;
	cout << endl;

	cout << "The final float ";
	cin >> l;
	cout << endl;

	float k = difference(i, j, l);

	cout << "the greatest difference is " << k << endl;

	int f;
	int g;

	cout << "give me numbers ";
	cin >> f;
	cout << endl;

	cout << "MORE ";
	cin >> g;
	cout << endl;

	Pair(f, g);

	int u;
	int r;
	int w;
	
	cout << "It never ends ";
	cin >> u;
	cout << endl;

	cout << "seriously ";
	cin >> r;
	cout << endl;

	cout << "why ";
	cin >> w;
	cout << endl;

	int y = SumNum(u, r, w);

	cout << y << endl;

	system("pause");
}