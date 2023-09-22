#ifndef _PLAYER
#define _PLAYER
#include <string>

// Deklarasi Class
class Player{
    public:
        std::string name;

        // Constructor
        Player(const char*); //prototype

        void display();
        std::string getName();
        void setName(const char*);
};

#endif