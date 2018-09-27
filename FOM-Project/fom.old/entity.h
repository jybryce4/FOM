#ifndef Entity_H
#define Entity_H

#include <iostream>
#include <string>


class Entity {

    private:
        double hp;
		double mp;
		double gp;
		std::string n;
		
    public:
        Entity();
		setHealth(double health);
		setMana(double mana);
		setMyorre(double myorre);
		setName(std::string name);
		
		std::string getName();
		getMyorre();
		getMana();
		getHealth();

};

#endif // Entity_H
