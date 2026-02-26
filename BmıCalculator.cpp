#include <iostream>
#include <string>
using namespace std;

int main()
{
    // variables
    string name;
    double weight;
    double height;
    double bmi;

    cout << "Hi. Welcome to my BMI Calculator Program." << endl;
    cout << "First, please enter your name: ";
    cin >> name;

    cout << "Enter your weight in kilograms (kg): ";
    cin >> weight;

    cout << "Enter your height in meters (example: 1.75): ";
    cin >> height;

    // BMI formula
    bmi = weight / (height * height);

    cout << "\nHello " << name << "." << endl;
    cout << "Your BMI result is: " << bmi << endl;

    // BMI categories
    if (bmi < 18.5)
    {
        cout << "You are Underweight." << endl;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "You are Normal weight." << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "You are Overweight." << endl;
    }
    else
    {
        cout << "You are Obese." << endl;
    }

    cout << "\nThis program calculates Body Mass Index using the formula:" << endl;
    cout << "BMI = weight / (height * height)" << endl;
    cout << "All made by Ruzgar Erdem" << endl;

    return 0;
}