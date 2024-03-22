#pragma once
#include <iostream>
#include <string>

class GameAccount {
   public:
    int game_id;
    std::string game_name;
    int game_array[100];
    int game_number;
};

void print();
void setAccout(GameAccount *p);
void printAccount(GameAccount *p);
void addGame(GameAccount *p);
void deleteGame(GameAccount *p);