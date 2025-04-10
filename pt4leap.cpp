#include <iostream>
using namespace std;

void hasLept(){

    int year;
    cout << "Is it a leap year?\n" "\n" "Enter a year: ";
    cin >> year;
    
    if (year % 100 == 0) {
        if (year % 400 == 0){
            cout << "YES!";
        } else {
            cout << "NO!";
        }
    } else if (year % 4 == 0){
        cout << "YES!";
    } else {
        cout << "NO!";
    }
}

int main() {

    hasLept();

    return 0;
}