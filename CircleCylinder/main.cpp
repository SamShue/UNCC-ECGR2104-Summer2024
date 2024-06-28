#include <iostream>
#include "lib.h"

using namespace std;

int main(){
    double radius;
    double height;
    
    // Compute area of circle
    cout << "Enter the radius of your circle:" << endl;
    cin >> radius;
    double area = circleArea(radius);
    cout << "The area of the circle is: " << area << endl;
    
    // Compute volume of cylinder
    cout << "Enter the radius of your cylinder:" << endl;
    cin >> radius;
    cout << "Enter the height of your cylinder:" << endl;
    cin >> height;
    double volume = cylinderVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;
    
    return 0;
}