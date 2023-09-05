#include<iostream>
#include<string>
#include "player.h"

//penjabaran method
Player::Player(const char* name){
    Player::name = name;
}

void Player::display(){
        std::cout << "Nama Player: " << this->name << std::endl;
}

std::string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}