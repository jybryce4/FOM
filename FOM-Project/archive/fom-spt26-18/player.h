//Class that defines the player

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
//#include "Entity.h" -- will work on later


class Player {

    private:
        double hp;
		double mp;
		double gp;
		std::string n;

    public:
        //Player();
		void setHealth(double health);
		void setMana(double mana);
		void setMyorre(double myorre);
		void setName(std::string name);

		std::string getName();
		double getMyorre();
		double getMana();
		double getHealth();


};

#endif // PLAYER_H
