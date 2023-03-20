#include "FABP.h"

FaBP::FaBP(double temp){
    temperature = temp;
}

void FaBP::setTemperature(double temp){
    temperature = temp;
}

double FaBP::getTemperature(){
    return temperature;
}

bool FaBP::isEthylFreezing(){
    if(temperature <= -173){
        return true;
    } else {
        return false;
    }
}

bool FaBP::isEthylBoiling(){
    if(temperature >= 172){
        return true;
    } else {
        return false;
    }
}

bool FaBP::isOxygenFreezing(){
    if(temperature <= -362){
        return true;
    } else {
        return false;
    }
}

bool FaBP::isOxygenBoiling(){
    if(temperature >= -306){
        return true;
    } else {
        return false;
    }
}

bool FaBP::isWaterFreezing(){
    if(temperature <= 32){
        return true;
    } else {
        return false;
    }
}

bool FaBP::isWaterBoiling(){
    if(temperature >= 212){
        return true;
    } else {
        return false;
    }
}