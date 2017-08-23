#include <iostream>

using namespace std;

void start();
void woods(bool &axe);
void gate(bool &lantern);
void cave(bool &axe, bool &ogre, bool &lantern);

void main()
{
	char answer;
	bool hasAxe = false;

	bool forward = false;
	while (forward == false)
	{
		cout << "Welcome to the maze: do you wish to play?" << endl;
		cout << "Y/N: ";
		cin >> answer;

		if (answer == 'y' || answer == 'Y')
		{
			cout << "Welcome" << endl;
			break;
		}
		else if (answer == 'n' || answer == 'N')
		{
			cout << "Goodbye" << endl;
			system("pause");
			return;
		}
		else
		{
			cout << "That is not a proper answer" << endl;
			continue;
		}
	}

	system("pause");
	cout << endl;

	cout << "You are an average person, in a world similar to our own." << endl;
	cout << "However, every person must take a test that risks their lives to complete." << endl;
	cout << "Your test starts now: " << endl;

	cout << endl;
	system("pause");
	cout << endl;

	start();


	system("pause");
}

void start()
{
	cout << "You stand outside the door, three paths stretch out before you." << endl;
	cout << "One path goes north, another goes west, and the last goes east." << endl;
	cout << "(In order to move you enter directions such as 'go east'.)" << endl;
	char direction[50] = {};
	bool dir = false;
	bool axe = false;
	bool ogre = true;
	bool lantern = false;

	while(dir == false){
		cin >> direction;



		if (strcmp(direction, "go north") == 0)
		{
			gate(lantern);
		}
		else if (strcmp(direction, "go east") == 0)
		{
			cave(axe, ogre, lantern);
		}
		else if (strcmp(direction, "go west") == 0)
		{
			woods(axe);
		}
		else
		{
			cout << "That is not possible, try again." << endl;
			continue;
		}
	}
}

void woods(bool &axe)
{
	char action[50] = {};
	cout << "You have entered a clearing in the woods." << endl;
	cout << "The smell of the fresh air and the feel of the soft grass calms you." << endl;
	if (axe == false)
	{
		cout << "A stump sits with an axe sticking out of it." << endl;
	}
	else if (axe == true)
	{
		cout << "A stump sits in the middle of the clearing." << endl;
	}

	cout << "The path back heads east." << endl;
	bool act = false;
	while (act = false) {
		cout << "What do you wish to do?" << endl;

		cin >> action;

		if (strcmp(action, "get axe") == 0 && axe == false)
		{
			cout << "You pick up the axe";
			axe = true;
			continue;
		}
		else if (strcmp(action, "get axe") == 0 && axe == true)
		{
			cout << "You already have that" << endl;
			continue;
		}
		else if (strcmp(action, "go east") == 0)
		{
			act = true;
			//start();
			return;
		}
		else
		{
			cout << "That is not possible, try again" << endl;
			continue;
		}
	}
}

void cave(bool &axe, bool &ogre, bool &lantern)
{
	char action[50] = {};

	cout << "You enter the mouth of a cave." << endl;
	cout << "In the dim light you see the dark shape of an oger" << endl;
	if (ogre == true)
	{
		cout << "Its sleeping body blocks the path" << endl;
		system("pause");
	}
	else if (ogre == false)
	{
		cout << "Its body lays off to the side" << endl;
		system("pause");
	}

	cout << "The path back heads west and the path forward heads east" << endl;
	
	bool act = false;
	while (act == false)
	{
		cout << "What do you wish to do?" << endl;
		cin >> action;
		if (strcmp(action, "go west") == 0)
		{
			act = true;
			return;
		}
		else if (strcmp(action, "use axe") == 0)
		{
			cout << "on what?" << endl;
			cin >> action;
			if (strcmp(action, "on oger") == 0 && oger == true)
			{
				cout << "You slay the oger and move it aside" << endl;
				oger = false;
				continue;
			}
			else if (strcmp(action, "on oger") == 0 && oger == false)
			{
				cout << "It is already dead" << endl;
				continue;
			}
			else
			{
				cout << "I cant use that there." << endl;
				continue;
			}
		}
		else if (strcmp(action, "light lantern") == 0 && oger == true)
		{
			cout << "The oger awakens and smashes you into the ground." << endl;
			cout << "You have died." << endl;
			system("pause");
			dead();
		}
		
	}

}

void gate(bool &lantern)
{

}

void dead()
{
	char choice;
	cout << "You are now dead and have failed the test" << endl;
	cout << "Do you wish to try again?" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{

	}
	else
	{
		exit;
	}

}