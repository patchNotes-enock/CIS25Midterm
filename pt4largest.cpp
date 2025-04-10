#include <iostream>
using namespace std;

int main() {

    int value1, value2, value3;

    cout << "Please enter three numbers:\n";
    cin >> value1 >> value2 >> value3;

    int largest;

    if (value1 >= value2){
        if (value1 >= value3){
            largest = value1;
        } else {
            largest = value3;
        }
    } else {
        if (value2 >= value3) {
            largest = value2;
        } else {
            largest = value3;
        }
    }
    cout << "The largest number is " << largest;
    return 0;
}