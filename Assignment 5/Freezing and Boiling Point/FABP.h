#ifndef FABP_H
#define FABP_H

class FaBP{
private:
    double temperature;
public:
    FaBP(double temp);
    void setTemperature(double temp);
    double getTemperature();
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
};

#endif