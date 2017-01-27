//============================================================================
// Name        : rock.cpp
// Author      : Ovidiu Cara
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    char first_player;
    char second_player;
    cout << "First player enter your weapon:\n";
    cin >> first_player;
    cout << "Second player enter your weapon: \n";
    cin >> second_player;

    switch (first_player)
    	{
    	case 'r':
    	case 'R':
    		switch (second_player){
    		case 'r':
    		case 'R':
    			cout << "Tie"<< endl;
    			break;
    		case 'p':
    		case 'P':
    			cout << "Player two wins. You suck" << endl;
    			break;
    		case 's':
    		case 'S':
    			cout << "Player one wins" << endl;
    			break;
    		default:
    			cout << " That's an invalid entry you sucker!" << endl;
    			break;
    		}break;
    	case 'p':
    	case 'P':
    			switch (second_player){
    			case 'p':
    			case 'P':
    				cout << "Tie" << endl;
    				break;
    			case 'r':
    			case 'R':
    				cout << "Second playa wins you MOTHAFACKA" << endl;
    				break;
    			case 's':
    			case 'S':
    				cout << "Second playa wins you MOTHAFACKA" << endl;
    				break;
    			default:
    				cout << "That's an invalid entry you MATHAFACKA" << endl;
    				break;
    			}break;
    	case 's':
    	case 'S':
    		switch (second_player){
    		case 's':
    		case 'S':
    			cout << "Tie you bitch" << endl;
    			break;
    		case 'r':
    		case 'R':
    			cout << "Second playa always wins you twat" << endl;
    			break;
    		case 'p':
    		case 'P':
    			cout << "Playa one is the real MVP" << endl;
    			break;
    		default:
    			cout << "Yo bitch you cant type three letters?" << endl;
    			break;
    		}break;
    	}


return (0);
}

