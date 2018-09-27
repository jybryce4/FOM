#include <iostream>
#include <string>

#include "Game.h"


//The game's "main" function
void Game::runFom() {
	
	//exit
	//bool quit = false;
	
	//setup a repetition structure
	Game::titleScreen();
	
	
	
	
	
}

void Game::titleScreen() {
	
	//will setup files later -- .txt's or something to be read in
	std::cout << "FATE OF MYSTRIA - v0.1a" << std::endl;
	//more stuff here later
	
	Game::mainMenu();
	
	
} 


//THIS METHOD IS BEING A PAIN IN THE ASS
void Game::mainMenu() {
	int choice;
	bool quit = false; //exit game
	
	do {
		//menu -- with input validation
		std::cout << "*****************" << std::endl;
		std::cout << "1) New Game" << std::endl;
		std::cout << "2) Load Save" << std::endl;
		
		//will have a few other things probably
		
		std::cout << "3) View Credits" << std::endl;
		std::cout << "4) Quit" << std::endl;
		std::cout << "*****************" << std::endl;
		
		std::cout << std::endl;
		
		//aesthetics
		std::cout << "?player_name\\>";
		std::cin >> choice;
		//std::cin.ignore();
		
		std::cout << std::endl;
		
		
		if (std::cin >> choice) {
			
			//while (!quit) {
			if (choice == 1) {
				std::cout << std::endl;
				Game::mainGame();
			
			}
			else if (choice == 2) {
				//loads game
			}
			
			else if (choice == 3) { 
				//credits
				
			}
			
			else if (choice == 4) {
				quit = true;
			}
			
			//}
			
		}
		
		else {
			std::cerr << "Enter an integer: 1, 2, 3, or 4." << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			
			std::cout << std::endl;
			
		}
		
	} while (!quit);
			
		
		//std::cin.ignore();
		std::cin.clear();
		std::cout << std::endl;
	
	
}

void Game::mainGame() {
	//Verify functionality
	std::cout << "<INSERT GAME HERE>" << std::endl;
	std::cout << std::endl;
	
}
