#include "Monster.h"
#include <iostream>
#include <string>

//Constructor
//Monster::Monster() {}

//Setters
void Monster::setHealth(double health) {hp = health;}

void Monster::setMana(double mana) {mp = mana;}

void Monster::setMyorre(double myorre) {gp = myorre;}

void Monster::setName(tring name) {n = name;}

//Getters

std::string Monster::getName() const {return n;}

double Monster::getMyorre() {return gp;}

//Monster::getMana() {return mp;}

double Monster::getHealth() {return hp;}

//Setters
