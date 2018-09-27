/*
* This is the main file for the Fate of Mystria RPG 
* (c) James Bryce
*/

//Cpp library headers
#include <iostream>
#include <string>

//Game's class headers
#include "Player.h"
#include "Sys_msg.h"

#include "Game.h"
//#include "Monster.h"
//#include "Entity.h"


int main() {
	
	Game game;
	
	game.runFom();
	
	/*
	//Tests for now
	std::string theMessage;
	
    Player p;
	Sys_msg m;
	
	m.setMessage("Welcome to Fate of Mystria!");
	
	theMessage = m.getMessage();
	
	std::cout << theMessage << std::endl;
	

	
	
	//p.setName("Balls");
	//std::cout << p.getName() << std::endl;

	//game
	
	*/
    return 0;
}

