#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string operation;
    double number1, number2;
    cout << "Enter the first no: ";
    cin >> number1;
    cout<< "Enter Operation (+,-,*,/): ";
    cin >> operation;
    cout << "Enter the Second no: ";
    cin >> number2;
    if (operation=="+") {
        cout<< number1+ number2; 
    } else if (operation=="-"){
        cout << number1-number2;
    } else if (operation=="*"){
        cout << number1*number2;
    } else if (operation=="/"){
        cout << number1/number2;
    } else {
        cout<< "Not a recognized Operation";
    }
    return 0;
}