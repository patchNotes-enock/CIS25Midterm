#include<iostream>
using namespace std;

int main() {

    int number = 10;
    
    for (int i = 0; i <= 10; i++){ //add open bracket for body of loop, remove semicolon, change 5 to 10 so "number" variable prints "Number is 20", change i=0 to i=1
        if(number == 20) { //use comparison operator, placed if statement inside of for loop
            cout << "Number is 20" << endl;
        } else {
            cout << "Number is not 20" << endl;
            number += 1; // change i to 1 to increase value of "number" variable by 1
            cout << "NEW NUMBER: " << number << "\n";
        }
    }       //close bracket to for loop
    return 0;
}
