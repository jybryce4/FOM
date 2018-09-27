#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>


class Monster {

    private:
        double hp;
		//double mp;
		double gp;
		std::string n;
		
    public:
        //Monster();
		setHealth(double health);
		setMana(double mana);
		setMyorre(double myorre);
		setName(std::string name);
		
		std::string getName();
		getMyorre();
		getMana();
		getHealth();

};

#endif // MONSTER_H
