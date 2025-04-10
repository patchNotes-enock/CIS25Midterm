#include <iostream>
using namespace std;


void calculateArea(){ // area of a rectangle
    float length;
    float width;
    cout << "Find the Area of a Rectangle!\n" "\n" "Enter the length in meters: ";
    cin >> length;
    cout << "Enter the width in meters: ";
    cin >> width;
    cout << "The area of the rectangle is: " << length * width << "\n";
}

int main() {

    calculateArea();

    return 0;
}