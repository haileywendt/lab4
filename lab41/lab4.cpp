// lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //Part A
    double saletaxpercent;
    double saletax;
    double saleamount;
    double totaltax;

    cout << "Enter total sale amount: $";
    cin >> saleamount;

    cout << "Enter sales tax: ";
    cin >> saletaxpercent;

    saletax = (saletaxpercent / 100);

    totaltax = (saleamount * saletax);

    cout << fixed << setprecision(2) << "Total tax: $" << totaltax << endl;

    //Part 1
    int tempvalue = 0;
    char tempscale;
    char CELSIUS = 'C';
    char FAHRENHEIT = 'F';
    double tempconverted;
    char convertedscale;

    cout << "Please enter temperature value: ";
    cin >> tempvalue >> tempscale;

    if (tempscale == CELSIUS) {
        tempconverted = (9.0 / 5.0) * (tempvalue + 32.0);
        convertedscale = FAHRENHEIT;
        if (tempconverted >= 212) {
            cout << "Water is a gas at this temperature.";
        }
        else if (tempconverted < 212 && tempconverted > 32) {
            cout << "Water is a liquid at this temperature.";
        }
        else if (tempconverted <= 32) {
            cout << "Water is a solid at this state.";
        }
    }
    else {
        if (tempvalue >= 212) {
            cout << "Water is a gas at this temperature.";
        }
        else if (tempvalue < 212 && tempvalue > 32) {
            cout << "Water is a liquid at this temperature.";
        }
        else if (tempvalue <= 32) {
            cout << "Water is a solid at this state.";
        }
    }

    //Part 2
    double num1 = 0.0;
    double num2 = 0.0;
    double num3 = 0.0;
    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "The largest number is " << num1 << ".";
    }
    if (num2 > num1 && num2 > num3) {
        cout << "The largest number is " << num2 << ".";
    }
    if (num3 > num1 && num3 > num2) {
        cout << "The largest number is " << num3 << ".";
    }

    //Part 3
    int num1 = 0;
    cout << "Please enter an integer: ";
    cin >> num1;

    if (num1 < 0) {
        num1 = (num1 * -1);
    }
    if (num1 >= 0 && num1 <= 9) {
        cout << "The number has 1 digit.";
    }
    if (num1 >= 10 && num1 <= 99) {
        cout << "This number has 2 digits";
    }
    if (num1 >= 100 && num1 <= 999) {
        cout << "This number has 3 digits";
    }
    if (num1 >= 1000 && num1 <= 9999) {
        cout << "This number has 4 digits";
    }
    if (num1 >= 10000 && num1 <= 99999) {
        cout << "This number has 5 digits";
    }
    if (num1 >= 100000 && num1 <= 999999) {
        cout << "This number has 6 digits";
    }
    if (num1 >= 1000000 && num1 <= 9999999) {
        cout << "This number has 7 digits";
    }
    if (num1 >= 10000000 && num1 <= 99999999) {
        cout << "This number has 8 digits";
    }
    if (num1 >= 100000000 && num1 <= 999999999) {
        cout << "This number has 9 digits";
    }
    if (num1 >= 1000000000 && num1 < 2000000000) {
        cout << "This number has 10 digits";
    }

    //Part 4
    double amountdue = 0.00;
    double amountreceived = 0.00;
    cout << "Customer owes $";
    cin >> amountdue;
    cout << "Customer pays $";
    cin >> amountreceived;

    double change = (amountreceived - amountdue);
    cout << fixed << setprecision(2) << "Change due is $" << change << endl;

    int changedue = ((100 * amountreceived) - (100 * amountdue));
    int dollars = (changedue / 100);
    changedue = (changedue % 100);
    int quarters = (changedue / 25);
    changedue = (changedue % 25);
    int dimes = (changedue / 10);
    changedue = (changedue % 10);
    int nickels = (changedue / 5);
    changedue = (changedue % 5);
    int pennies = (changedue / 1);
    changedue = (changedue % 1);

    if (dollars >= 1) {
        cout << dollars << " dollars" << endl;
    }
    if (quarters >= 1) {
        cout << quarters << " quarters" << endl;
    }
    if (dimes >= 1) {
        cout << dimes << " dimes" << endl;
    }
    if (nickels >= 1) {
        cout << nickels << " nickels" << endl;
    }
    if (pennies >= 1) {
        cout << pennies << " pennies" << endl;
    }
    return 0;
}
