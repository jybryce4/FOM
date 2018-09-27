//Class used to display text during the game.

#ifndef SYS_MSG_H
#define SYS_MSG_H

#include <iostream>
#include <string>

class Sys_msg {
	private:
		std::string msg;
		
		std::string plyr;
			
	public:
	
		void setMessage(std::string message);
		void setPlayerNameMsg(std::string playerName);
		
		std::string getMessage();
		std::string getPlayerName();
		
		
	
};


#endif //SYS_MSG