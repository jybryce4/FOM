//Class Sys_msg's method definitions

#include "Sys_msg.h"

#include <iostream>
#include <string>

//setters
void Sys_msg::setMessage(std::string message) { msg = message; }

void Sys_msg::setPlayerNameMsg(std::string playerName) { plyr = playerName; } 

//getters
std::string Sys_msg::getMessage() { return msg; }
std::string Sys_msg::getPlayerName() { return plyr; }

