#include <iostream>
#include <cmath>
using namespace std;

// basic calculator (functions, loops, conditionals, and basic input/ouput)

class basicCalculator {
    public :
double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    if(b == 0.0) {
        cout << "Error! Division by zero." << endl;
        return 0.0;
    } else {
        return a / b;
    }
}


double absolute(double a) {
    return abs(a);
}
double square(double a) {
    if ( a >= 0) 
    return sqrt(a);
else {
    cout << "Negative number for square root" << endl;
    return 0;
}
}
double sine(double a) {
    return sin(a);
}
double cosine(double a) {
    return cos(a);
}

// Function Declarations for the menu
void showMenu() {
    cout <<"\n===========Calculator ===========" << endl;
    cout << "Select an operation by typing the corresponding number:" << endl;
    cout << "1.Addition (+)" << endl;
    cout << "2.Substraction (-)" << endl;
    cout << "3.Multiply (*)" << endl;
    cout << "4.Division (/)" << endl;
    cout << "5.Absolute Value" << endl;
    cout << "6.Square Root" << endl;
    cout << "7.Sine" << endl;
    cout << "8.Cosine" << endl;
    cout << "9.Exit" << endl;
    cout << "========================================" << endl;
}

void handleOperation(int choice) {
    double num1, num2,result;

    switch (choice) 
    {
    case 1 :
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    result = add(num1,num2);
    cout << "Result : " << result << endl;
    break;
  case 2 :
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    result = subtract(num1,num2);
    cout << "Result : " << result << endl;
    break;
    case 3 :
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    result = multiply(num1,num2);
    cout << "Result : " << result << endl;
    break;

    case 4 :
    cout << "Enter two numbers : " << endl;
    cin >> num1 >> num2;
    result = divide(num1,num2);
    if( num2 != 0) {
    cout << "Result : " << result << endl;
    } else {
        cout << "Division with zero situation!" << endl;
    }
    break;

    case 5 :
    cout << "Enter a number : " << endl;
    cin >> num1;
    result = abs(num1);
    cout << "Result :" << result << endl;
    break;
     case 6 :
    cout << "Enter a number : " << endl;
    cin >> num1;
    if (num1 >= 0) {
    result = sqrt(num1);
    cout << "Result :" << result << endl;
    } else {
        cout << "Negative number for Square Root" << endl;
    }
    break;

     case 7 :
    cout << "Enter a number (in radians) : " << endl;
    cin >> num1;
    result = sin(num1);
    cout << "Result :" << result << endl;
    break;

     case 8 :
    cout << "Enter a number (in radians) : " << endl;
    cin >> num1;
    result = cosine(num1);
    cout << "Result :" << result << endl;
    break;
    case 9 :
    cout << "Exiting the calculator" << endl << "Goodbye !" << endl;
    break;

    default :
    cout << "Invalid choice. Please try again" << endl;
    }
}
};


int main () {

int choice ;
basicCalculator calculator;
do {
 calculator.showMenu();

 cout << "Enter your choice : ";
 cin >> choice ;
 
 if (choice != 9) {
calculator.handleOperation(choice);
 }
} while(choice != 9);
  return 0;
}