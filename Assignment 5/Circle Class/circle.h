#include <iostream>
using namespace std;

class Circle {
   private:
      double radius;
      const double pi = 3.14159;
      
   public:
      Circle();
      
      Circle(double radius);
      
      void setRadius(double radius);
      
      double getRadius();
      
      double getArea();
      
      double getDiameter();
      
      double getCircumference();
};