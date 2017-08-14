#include <iostream>

using namespace std;

int main()
{
	int f = 5;
	cout << f << endl;

	f = 7;
	cout << f << endl;

	f = 2;
	cout << f << endl;

	f = 12330;
	cout << f << endl;

	cout << endl;

	int power = 50;
	cout << "power is " << power << endl;
	
	int bonus = 150;
	cout << "bonus is " << bonus << endl;

	int total = power + bonus;
	cout << "total is " << total << endl;

	cout << endl;

	float health = 97.2f;
	cout << "you have " << health << " health" << endl;

	float damage = 27.3f;
	cout << "you took " << damage << " damage" << endl;

	float totalz = health - damage;
	cout << "You have " << totalz << " health left" << endl;

	cout << endl;

	int drag;
	cin >> drag;

	cout << drag << endl;

	cout << endl;

	float degCelsius;
	float degFahrenheit = 0.0f;

	cout << "input celsius: ";
	cin >> degCelsius;

	degFahrenheit = (degCelsius * 1.8) + 32;

	cout << "Celsius to Fahrenheit)" << endl;
	cout << "Celsius:    " << degCelsius << endl;
	cout << "Fahrenheit: " << degFahrenheit << endl;

	cout << endl;

	float rectWidth;
	float rectHeight;
	float rectArea = 0.0;

	cout << "Input the width: ";
	cin >> rectWidth;
	cout << endl;

	cout << "Input the Height: ";
	cin >> rectHeight;
	cout << endl;

	rectArea = rectWidth * rectHeight;

	cout << "Area of a Rectrangle)" << endl;
	cout << "H: " << rectHeight << " , W: " << rectWidth << endl;
	cout << "Area: " << rectArea << endl;

	cout << endl;

	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	cout << "Input a: ";
	cin >> a;
	cout << endl;

	cout << "Input b: ";
	cin >> b;
	cout << endl;

	cout << "Input c: ";
	cin >> c;
	cout << endl;

	cout << "Input d; ";
	cin >> d;
	cout << endl;

	cout << "Input e: ";
	cin >> e;
	cout << endl;

	avg = (a + b + c + d + e) / 5;

	cout << "Average of Five)" << endl;
	cout << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
	cout << "avg: " << avg << endl;

	cout << endl;

	int x;
	int y;
	int z = 0;

	cin >> x;
	cin >> y;

	z = y;
	y = x;
	x = z;

	cout << "Number Swap)" << endl;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;

	cout << endl;

	int age = 0;
	int months = 12;
	int lived;

	cout << "Input your age: ";
	cin >> age;
	cout << endl;

	lived = age * months;

	cout << "Howdy! You are " << age << " years old!" << endl;
	cout << "You have been alive for at least " << lived << " months!" << endl;

	cout << endl;

	system("pause");
}