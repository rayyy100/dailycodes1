#include<iostream>
using namespace std;
int main() {
	int room = 1; 
	char input; 
	string inverntory[10];

	cout << "You wake up to find yourself in a cold icolated dungeon. Can you escape? Good luck!!!" << endl;

	do {
		switch (room) {
		case 1: 
			cout << "Your are in room 1. As you are walking inside the room the only things that you can see are plants growing everywhere you cant even cross the room because of them. Its a beautiful yet filthy place. You can pick up a sword to cut the plants to get across. You can go North." << endl; 
			cin >> input; 
			if (input == 'n')
				if (input.compare("Pick up") == 0)
					inverntory[0] = "Sword"; 
				room = 2; 
			else
				cout << "Sorry, that's not an option!!!" << endl; 
			break;
		case 2: 
			cout << "You are now in room 2. This room wasnt as pretty as you thought it was going to. You can hardly see because of all of the fog but you can see somthing comeing to you! You use your sword to try and prevent from anything harimg you. Once you defeat whatever that was you are able to go South." << endl; 
			cin >> input; 
			if (input == 's')
				if (inout.compare("pick up") == 0 )
				room = 1;
			else
				cout << "sorry, that is not an option!!!" << endl; 
			break;

		}



	} while (input != 'q'); 

} 
