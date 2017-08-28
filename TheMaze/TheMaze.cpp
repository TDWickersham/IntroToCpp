#include <iostream>

using namespace std;

void start();
void woods(bool &axe, bool &GameOver);
void gate(bool &lantern, bool &key, bool &door, bool &GameOver);
void cave(bool &axe, bool &ogre, bool &lantern, bool &key, bool &GameOver);
void dead(bool &GameOver);
void victory(bool &GameOver);

void main()
{

		char answer;
		bool GameOver = false;
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

	bool GameOver = false;


	while (GameOver == false)
	{
		char direction[50] = {};
		bool dir = false;
		bool axe = false;
		bool ogre = true;
		bool lantern = false;
		bool key = false;
		bool door = false;
		bool GameOver = false;

		while (dir == false) {
			cout << endl;
			cout << "You stand outside the door, three paths stretch out before you." << endl;
			cout << "One path goes north, another goes west, and the last goes east." << endl;
			cout << "(In order to move you enter directions such as 'go east'.)" << endl;
			cin >> direction;



			if (strcmp(direction, "gonorth") == 0)
			{
				gate(lantern, key, door, GameOver);
			}
			else if (strcmp(direction, "goeast") == 0)
			{
				cave(axe, ogre, lantern, key, GameOver);
				if (GameOver == true)
				{
					continue;
				}
			}
			else if (strcmp(direction, "gowest") == 0)
			{
				woods(axe, GameOver);
			}
			else if (strcmp(direction, "lookaround") == 0)
			{
				cout << "the door behind you sits in a blank white wall" << endl;
				cout << "the path below you stretches off in three directions" << endl;
				continue;
			}
			else
			{
				cout << "That is not possible, try again." << endl;
				continue;
			}
		}
	}
}


void woods(bool &axe, bool &GameOver)
{
	char action[50] = {};
	cout << endl;
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
	while (act == false) {
		cout << "What do you wish to do?" << endl;

		cin >> action;

		if (strcmp(action, "getaxe") == 0 && axe == false)
		{
			cout << "You pick up the axe";
			axe = true;
			continue;
		}
		else if (strcmp(action, "getaxe") == 0 && axe == true)
		{
			cout << "You already have that" << endl;
			continue;
		}
		else if (strcmp(action, "goeast") == 0)
		{
			act = true;
			//start();
			return;
		}
		else if (strcmp(action, "lookaround") == 0)
		{
			cout << "You are standing in a clearing, the trees make a near perfect circle around you" << endl;
			cout << "The soft sounds of birds can just be heard coming from the trees" << endl;
			cout << "The scent of the forest and the grass tickle your nose" << endl;
			continue;
		}
		else if (strcmp(action, "gowest") == 0 || strcmp(action, "gosouth") == 0 || strcmp(action, "gonorth") == 0)
		{
			cout << endl;
			cout << "You entered a wolves nest, and they attack" << endl;
			cout << "You are unable to escape them" << endl;
			dead(GameOver);
		}
		else
		{
			cout << "That is not possible, try again" << endl;
			continue;
		}
	}
}

void cave(bool &axe, bool &ogre, bool &lantern, bool &key, bool &GameOver)
{
	char action[50] = {};
	cout << endl;
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
		if (strcmp(action, "gowest") == 0)
		{
			act = true;
			return;
		}
		else if (strcmp(action, "useaxe") == 0)
		{
			cout << "on what?" << endl;
			cin >> action;
			if (strcmp(action, "onogre") == 0 && ogre == true)
			{
				cout << "You slay the ogre and move it aside" << endl;
				ogre = false;
				continue;
			}
			else if (strcmp(action, "onogre") == 0 && ogre == false)
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
		else if (strcmp(action, "useaxeonogre") == 0 && ogre == true)
		{
			cout << "You slay the ogre and move it aside" << endl;
			ogre = false;
			continue;
		}
		else if (strcmp(action, "useaxeonogre") == 0 && ogre == false)
		{
			cout << "Its already dead" << endl;
			continue;
		}
		else if (strcmp(action, "lightlantern") == 0 && ogre == true)
		{
			cout << endl;
			cout << "The oger awakens and smashes you into the ground." << endl;
			cout << "You have died." << endl;
			system("pause");
			dead(GameOver);
			if (GameOver == true)
			{
				return;
				break;
			}
			
		}
		else if (strcmp(action, "wakeogre") == 0)
		{
			cout << "The ogre awakens, hitting you with the back of its massive hand" << endl;
			cout << "You are sent flying into a cave wall, getting knocked unconcious" << endl;
			cout << "You later awaken a few moments before you are made into the ogres next meal" << endl;
			dead(GameOver);
			if (GameOver == true)
			{
				return;
				break;
			}
		}
		else if (strcmp(action, "lightlantern") == 0 && ogre == false)
		{
			cout << endl;
			cout << "You light the lantern, its light dances among the walls, revealing a room behind the ogre" << endl;
			cout << "On a stone pedastle sits a key." << endl;
			cout << "Do you wish to take it? Y/N" << endl;
			cin >> action;
			if (strcmp(action, "y") == 0 || strcmp(action, "Y") == 0)
			{
				cout << "You take the key" << endl;
				key = true;
				continue;
			}
			else if (strcmp(action, "n") == 0 || strcmp(action, "N") == 0)
			{
				cout << "You extinguish the lantern and leave the key" << endl;
				return;
			}
		}
		else if (strcmp(action, "lookaround") == 0)
		{
			cout << endl;
			cout << "The cave walls show signs of unnatural excavation, most likely from the ogre" << endl;
			cout << "Little knotches mark up the walls randomly and erradically" << endl;
			cout << "Bones from what you can only assume to be previous test takers line the floor" << endl;
			continue;
		}

		else
		{
			cout << "I cant do that" << endl;
		}
		
	}

}

void gate(bool &lantern, bool &key, bool &door, bool &GameOver)
{
	char action[50] = {};
	cout << endl;
	cout << "You walk up to a wall, 50 feet high." << endl;
	cout << "It has a gate in it with bars too close together to slip through" << endl;
	cout << "The goal is visible on the other side." << endl;
	if (lantern == false)
	{
		cout << "There is a glint in the bushes to your left." << endl;
	}
	else if (lantern == true)
	{
		cout << "The aged wall shows the years it has sat there on its chisled form." << endl;
	}
	bool act = false;
	while (act == false)
	{
		cout << "What would you like to do?" << endl;
		cin >> action;
		if (strcmp(action, "checkbushes") == 0)
		{
			cout << "A lantern sits nestled in its branches. You take it." << endl;
			lantern = true;
			continue;
		}
		else if (strcmp(action, "opengate") == 0 && key == false)
		{
			cout << "I cant open that yet." << endl;
			continue;
		}
		else if (strcmp(action, "opengate") == 0 && key == true)
		{
			cout << "The gate opens and the path north opens up." << endl;
			door = true;
			continue;
		}
		else if (strcmp(action, "gonorth") == 0 && door == false)
		{
			cout << "I cant go that way" << endl;
			continue;
		}
		else if (strcmp(action, "gonorth") == 0 && door == true)
		{
			cout << "You walk to the goal." << endl;
			victory(GameOver);
			if (GameOver == true)
			{
				return;
				break;
			}

		}
		else if (strcmp(action, "gosouth") == 0)
		{
			act = true;
			return;
		}
		else if (strcmp(action, "climbwall") == 0)
		{
			cout << "You attempt to climb the wall however the handholds are unstable" << endl;
			cout << "They break and you fall, hitting your head on the stone path below" << endl;
			dead(GameOver);
			if (GameOver == true)
			{
				return;
				break;
			}
		}
		else if (strcmp(action, "lookaround") == 0)
		{
			cout << endl;
			cout << "You stand on a stone pathway, the way south stretches on for a while" << endl;
			cout << "You can see the door you passed through earlier in the distance" << endl;
			cout << "Small amounts of vegitation line the path around you" << endl;
			cout << "Trees sit back away from the path giving little shade" << endl;
			continue;
		}
		else
		{
			cout << "I cant do that" << endl;
			continue;
		}

	}

}

void dead(bool &GameOver)
{
	char choice;
	cout << "You are now dead and have failed the test" << endl;
	cout << "Do you wish to try again?" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		GameOver = true;
	}
	else
	{
		GameOver = false;
		//call this funcitons when a player dies
		// afterwards, check the bool for the anser
		// if(GameOver == true)
		// { continue; for yes 
		//   break; for no
		//}
		exit(0);
	}

}

void victory(bool &GameOver)
{
	char choice;
	cout << "You have solved the maze, although this would only be the beginning," << endl;
	cout << "This puzzle is the end for now. I hope you enjoyed." << endl;
	cout << "Congradulations." << endl;
	cout << "Do you wish to play again?" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y')
	{
		GameOver = true;
	}
	else
	{
		GameOver = false;
		exit(0);
	}
}