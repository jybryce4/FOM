Fate of Mystria - The CLI RPG: Documentation 

This file defines the specifications for this project: FOM for Windows cmd-prompt.

General Overview:
Fate of Mystria is a game that will be played in the Windows Command Prompt. It is based on my book idea by the same title. 
The game will be as open-world as possible. There are going to be many maps—the World Map, the Cities, towns, etc. Nungia, Alhara, Fyeria, and Tiagor will be the countries. 
Characters
Aside from the player character, there will be monsters, friendly NPCs, and the player’s party. There will be a main storyline with villains and monster bosses, as well as a good number of side-quest NPCs.
Main characters other than the player:
Xhaa
Catruya
Tiel
Y’tae
Monsters
Core Components Needed:
A system for handling in game text.
Text files will need to store a lot of the data as it is cumbersome to have it all in string literals.
This will include the story, the dialogues, etc
A main menu
Maps
World Map
Nungia
Port Cyros
Yando Town
Esh woods
Yovania
Fields
Mountains
Tiagor
Undas Majoris
Harrapan pass
Port Watsukai
Mountains
Fyeria
Delos’kyat
Alhara
Zaveri
Great Pyramid
Desert itself
Mountains
A save game system
A random encounter system
A combat system
Player handling system
Stats
Inventory
Equipped
Level & XP
Monster handling system
Health
Level

Algorithms & Design:
Written in C++

File by file breakdown:
main.cpp – the C++ main function file
player.cpp – the class Player to handle the player’s information
player.h
monster.cpp
monster.h
sys_msg.cpp
sys_msg.h
map.cpp
map.h
