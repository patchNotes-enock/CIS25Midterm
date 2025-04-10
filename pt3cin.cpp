#include <iostream>
using namespace std;

void obtainData() {
    string name;
    int age;
    int faveNumber;

    cout << "Welcome! Please enter your name: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your favorite number: ";
    cin >> faveNumber;
    cout << "Thank you! Please confirm the following is correct" "\n" "Your name is: " << name << "\n" "You are " << age << " years old" "\n" "Your favorite number is " << faveNumber << "\n";

}

int main() {

    obtainData();

    return 0;

}