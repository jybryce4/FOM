#include "Entity.h"
#include <iostream>
#include <string>

//Constructor
Entity::Entity() {}

//Setters
Entity::setHealth(double health) {hp = health;}

Entity::setMana(double mana) {mp = mana;}

Entity::setMyorre(double myorre) {gp = myorre;}

Entity::setName(std::string name) {n = name;}

//Getters

Entity::getName() const {return n;}

Entity::getMyorre() {return gp;}

Entity::getMana() {return mp;}

Entity::getHealth() {return hp;}