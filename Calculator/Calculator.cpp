#include <iostream>
#include "Header.h"

using namespace std;

void menu();
void menu2();

int main()
{
    char choice = 'y';
    struct numbers {
        int num1;
        int num2;
    } var{};

    int selection;
    calculate MathProblem;
    while (choice != 'n' || choice != 'N'){
        cout << "1. Basic Math problems\n2. Advance Math Problems" << endl;
        cin >> selection;
        system("CLS");
        if (selection == 1) {
            menu();
            cin >> selection;
            cout << "Enter your first number: ";
            cin >> var.num1;
            cout << "Enter your second number: ";
            cin >> var.num2;
            cout << "---------------------------" << endl;
            cout << "Results: ";
            cout << MathProblem.Results(selection, var.num1, var.num2) << endl;
            cout << "---------------------------" << endl;
        }
        else if (selection == 2) {
            menu2();
            cin >> selection;
            if (selection <= 4) {
                cout << "Enter your first number: ";
                cin >> var.num1;
                cout << "Enter your second number: ";
                cin >> var.num2;
                cout << "---------------------------" << endl;
                cout << "Results: ";
                cout << MathProblem.Results(selection, var.num1, var.num2) << endl;
                cout << "---------------------------" << endl;
            }
            else
            {
                cout << "Enter the number you want to compute: ";
                cin >> var.num1;
                cout << MathProblem.Results(selection, var.num1, var.num2) << endl;
                cout << "---------------------------" << endl;
            }
        }
        cout << "Want to continue? (Y/N): ";
        cin >> choice;
        system("CLS");
    }
}

void menu() {
    cout << "Welcome to the basic function calculator" << endl;
    cout << "--------------------------------" << endl;
    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide" << endl;
    cout << "--------------------------------" << endl;
}
void menu2() {
    cout << "Welcome to the basic function calculator" << endl;
    cout << "--------------------------------" << endl;
    cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Sine\n6.Cosine\n7.Tangent\n8.Cot\n9.SEC\n10.CSC" << endl;
    cout << "--------------------------------" << endl;
}