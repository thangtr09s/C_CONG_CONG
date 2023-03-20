#include <iostream>
#include "circle.h"

using namespace std;

int main() {
   double r;
   
   cout << "Nhap ban kinh hinh tron: ";
   cin >> r;
   
   Circle myCircle(r);
   
   cout << "Dien tich hinh tron la: " << myCircle.getArea() << endl;
   cout << "Duong kinh hinh tron la: " << myCircle.getDiameter() << endl;
   cout << "Chu vi hinh tron la: " << myCircle.getCircumference() << endl;
   
   return 0;
}