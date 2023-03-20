#include <iostream>
#include "coin.h"

int main() {
    Coin penny;
    std::cout << "Mat ban dau huong len tren: " << penny.getSideUp() << std::endl;
    
    int headsCount = 0;
    int tailsCount = 0;
    
    for (int i = 1; i <= 20; i++) {
        penny.toss();
        std::cout << "Nem lan " << i << ": " << penny.getSideUp() << std::endl;
        if (penny.getSideUp() == "Dau")
            headsCount++;
        else
            tailsCount++;
    }
    
    std::cout << "Dem Dau: " << headsCount << std::endl;
    std::cout << "Den Duoi: " << tailsCount << std::endl;
    
    return 0;
}