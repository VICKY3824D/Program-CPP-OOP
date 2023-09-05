#include<iostream>
#include<string>

// eksternal definition
#include "player.h"

using namespace std;

int main(){

    Player* playerObjek = new Player("Marni");
    playerObjek->display();

    cout << "get name: " << playerObjek->getName() << endl;
    cout << "rubah nama" << endl;
    playerObjek->setName("Isabela");
    playerObjek->display();
    
    return 0;
}
