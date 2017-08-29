#include <iostream>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;



int main()
{
	char string[50] = {};
	cout << "What is your name?" << endl;
	cin >> string;
	cout << "hello " << string << endl;

	char color[50] = {};
	cout << "What is your favoite color?" << endl;
	cin.clear();
	cin.ignore(80, '\n');
	cin >> color;
	if (strcmp(color, "red") == 0)
	{
		cout << "Red like roses. beautiful" << endl;
	}
	else if (strcmp(color, "blue") == 0)
	{
		cout << "Oooooo, the color of light reflected off a water source onto the atmosphere" << endl;
	}
	else if (strcmp(color, "yellow") == 0)
	{
		cout << "like a sunflower, nice" << endl;
	}
	else if (strcmp(color, "green") == 0)
	{
		cout << "Ah, the color of the leaves on trees, refreshing" << endl;
	}
	else if (strcmp(color, "orange") == 0)
	{
		cout << "like an orange, which rhymes with door hinge" << endl;
	}
	else if (strcmp(color, "purple") == 0)
	{
		cout << "Like a grape, lets make some wine" << endl;
	}
	else if (strcmp(color, "white") == 0)
	{
		cout << "I hope you arent meaning the power" << endl;
	}
	else if (strcmp(color, "black") == 0)
	{
		cout << "Just like what my fears dwell in" << endl;
	}
	else
	{
		cout << "I dont recognize this color" << endl;
	}

	cout << "Input a string and i will remove the blank parts" << endl;
	char StringName[80];
	char charactername;
	cin.clear();
	cin.ignore(80,'\n');
	

	cin.getline(StringName, 78);
	for (int i = 0; i <= strlen(StringName); ++i)
	{
		charactername = StringName[i];
		if (charactername == 32 || charactername == 9 || charactername == 10)
		{

		}
		else
		{
			cout << charactername;
		}
	}

	system("pause");
}