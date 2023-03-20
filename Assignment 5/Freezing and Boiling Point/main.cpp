#include <iostream>
#include "FaBP.h"

using namespace std;

int main(){
    double temp;
    cout << "Nhap nhiet do: ";
    cin >> temp;

    FaBP f(temp);

    if(f.isEthylFreezing()){
        cout << "Ruou etylic se dong dac o " << f.getTemperature() << endl;
    }

    if(f.isEthylBoiling()){
        cout << "Ruoi etylic se soi o " << f.getTemperature() << endl;
    }

    if(f.isOxygenFreezing()){
        cout << "Oxy se dong bang o " << f.getTemperature() << endl;
    }

    if(f.isOxygenBoiling()){
        cout << "Oxy se soi o " << f.getTemperature() << endl;
    }

    if(f.isWaterFreezing()){
        cout << "Nuoc se dong bang o " << f.getTemperature() << endl;
    }

    if(f.isWaterBoiling()){
        cout << "Nuoc se soi o " << f.getTemperature() << endl;
    }

    return 0;
}