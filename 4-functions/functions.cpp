#include <iostream>
#include <cmath>

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


int min(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else if (b > a)
	{
		return a;
	}
	else if (b = a)
	{
		return a;
	}
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else if (b > a)
	{
		return b;
	}
	else if (b = a)
	{
		return a;
	}

}

int clamp(int a, int b, int c)
{
	if (c > a && c < b)
	{
		return c;
	}
	else if (c <= a)
	{
		return a;
	}
	else if (c >= b)
	{
		return b;
	}
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

	cout << endl;

	int z;
	int x;

	cout << "I will tell you the min ";
	cin >> z;
	cout << endl;
	cin >> x;
	cout << endl;

	int p = min(z, x);

	cout << "The min is " << p << endl;

	cout << endl;

	int s;
	int t;

	cout << "I will now tell the max ";
	cin >> s;
	cout << endl;
	cin >> t;
	cout << endl;

	int e = max(s, t);

	cout << "the max is " << e << endl;

	cout << endl;

	int m;
	int n;
	int o;

	cout << "now for the clamp ";
	cin >> m;
	cout << endl;
	cin >> n;
	cout << endl;
	cin >> o;
	cout << endl;

	int p = clamp(m, n, o);

	cout << p << endl;

	cout << endl;


	system("pause");
}