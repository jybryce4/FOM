//class Player's Method Definitions
//James Bryce

#include "Player.h"
//#include "Player.h"
#include <iostream>
#include <string>

//Constructor
//maybe

//Setters
void Player::setHealth(double health) {hp = health;}

void Player::setMana(double mana) {mp = mana;}

void Player::setMyorre(double myorre) {gp = myorre;}

void Player::setName(std::string name) {n = name;}

//Getters

std::string Player::getName() {return n;}

double Player::getMyorre() {return gp;}

double Player::getMana() {return mp;}

double Player::getHealth() {return hp;}


//Getters


