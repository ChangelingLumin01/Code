#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

//All Function declaration
void circle();
void calcArea(double radius);

int main()
{
    double diameter;
    radius = circle();
    area = calcArea(radius);

    cout << "Diameter of the circle: " << diameter << " units" << endl;
    cout << "Circumference of the circle: " << circle << " units" << endl;
    cout << "Area of the circle:" << area << " sq. units" << endl;

    return 0;
}


//Calculating circumference of circle whose radius is given

void circle()
{
    double radius;

    // Inputting radius of circle from user
    cout << "Enter radius of circle: ";
    cin >> radius;
    calcArea(radius); 
    return;
}

//Finding area of circle whose radius is given
void calcArea(double radius)
{
    double area;
    const float M_PI = 3.14;
    area = 1.0 / 4.0 * M_PI * pow(radius, 2);
    return;
}