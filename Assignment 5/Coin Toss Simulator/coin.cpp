#include "coin.h"
#include <cstdlib>      
#include <ctime>        

Coin::Coin() {
    srand(time(0));        
    int randomValue = rand() % 2;
    
    if (randomValue == 0)
        sideUp = "heads";
    else
        sideUp = "tails";
}

void Coin::toss() {
    int randomValue = rand() % 2;
    if (randomValue == 0)
        sideUp = "Dau";
    else
        sideUp = "Cuoi";
}

std::string Coin::getSideUp() const {
    return sideUp;
}