#include <iostream>
#include <stdlib.h>
#include<iomanip>
#include<cmath>

using namespace std;

void simple_calculator();
void quadratic_equation_solver();
void factorial_function();
void slope_of_line();
void prime_number();

int main() {
    char key;
    do {
        system("cls");
        cout<<"\n\n\n\tARITHMETIC SOLVER SYSTEM";
        cout<<"\n\n\t01. SIMPLE CALCULATOR";
        cout<<"\n\n\t02. QUADRATIC EQUATION SOLVER";
        cout<<"\n\n\t03. FACTORIAL FUNCTION";
        cout<<"\n\n\t04. CALCULATING SLOPE OF THE LINE GIVEN TWO END POINTS";
        cout<<"\n\n\t05. FIND PRIME NUMBER IN GIVEN RANGE";
        cout<<"\n\n\t06. EXIT";
        cout<<"\n\n\tSelect Your Option (1-6) ";
        cin>>key;
        system("cls");
        switch(key) {
            case '1':
                simple_calculator();
                break;
            case '2':
                quadratic_equation_solver();
                break;
            case '3':
                factorial_function();
                break;
            case '4':
                slope_of_line();
                break;
            case '5':
                prime_number();
                break;
            case '6':
                cout<<"\n\n\tThanks for using Arithmetic Solver System";
                break;
            default:
                cout<<"\a";
        }
        cin.ignore();
        cin.get();
    } while (key != '6');
        return 0;
}

void simple_calculator() {
    double num1,num2;
    char operation,redo;
    double answer;
    do {
        cout<<" Please enter two numbers to apply to the calculation."<<endl;
        cout<<"1st num:";
        cin>>num1;
        cout<<"2nd num:" ;
        cin>>num2;
        cout<<" Please enter an operation which you like to calculate (+,-,*,/,s)";
        cout<<"[s stands for swap]:";
        cin>>operation ;
        cout<<endl<<endl;
        switch (operation) {
            case'+':
                cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
                answer = (num1+num2);
                cout<<answer<<endl;
                break;
            case'-':
                cout<<"The subtraction of two numbers ("<<num1<<","<<num2<<"):";
                answer = (num1-num2);
                cout<<answer<<endl;
                break;
            case'*':
                cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
                answer = (num1*num2);
                cout<<answer<<endl;
                break;
            case'/':
                cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
                if (num2 == 0){
                    cout<<"not valid"<<endl;
                } else {
                    answer = (num1/num2);
                    cout<<answer<<endl;
                }
                break;
            case's':
                cout<<"The swap of two numbers ("<<num1<<","<<num2<<"):";
                swap(num1, num2);
                cout<<"1st number="<<num1<<" and 2nd number="<<num2<<endl<<endl;
                break;
            default:
                cout<<"unknown command"<<endl;

        }
        cout<<"enter Y to continue or any key to exit:";
        cin>>redo;
        cout<<endl<<endl;
    } while(redo == 'y'|| redo == 'Y');
        system("pause");
}

void quadratic_equation_solver() {
    double a, b, c, x1, x2,x3;

    cout<<"Note : real solution of the quadratic equation format is ax*x + bx + c = 0 "<<endl;
    cout<<"enter the value of a=";
    cin>>a;

    cout<<"enter the value of b=";
    cin>>b;
    cout<<"enter the value of c=";
    cin>>c;
    cout<<"the quadratic equation is ("<<a;
    cout<<" * x * x ) + ("<<b;
    cout<<"*x) + ("<<c<<")"<<endl;

    if (a == 0) {
        cout<<"not a valid equation"<<endl;
    } else {
        if (((b * b) - (4 * a * c)) >= 0) {
            x3 = (b*b) - (4 * a * c);
            x1 = (-b+sqrt(x3))/(2*a);
            x2 = (-b-sqrt(x3))/(2*a);
            cout<<"root= "<<x1<<" , "<<x2<<endl;
        } else {
            cout<<"not a real root"<<endl;
        }
    }
    system("pause");
}

void factorial_function() {
    int n;
    int result = 1;
    cout<<"Enter a natural number: ";
    cin>>n;
    while(n < 0) {
        cout<<"Please re-enter a correct natural number: ";
        cin>>n;
    }
    while (n > 0) {
        result = result * n;
        n = n - 1;
    }
    cout<<"The factorial result is : "<<result<<endl;
    system("pause");
}

void slope_of_line() {
    float slope;
    float x1, y1, x2, y2;
    float dx, dy;

    cout<<"Program to find the slope of a line given two end points\n";

    cout<<"Enter X1: ";
    cin>>x1;

    cout<<"Enter Y1: ";
    cin>>y1;

    cout<<"Enter X2: ";
    cin>>x2;

    cout<<"Enter Y2: ";
    cin>>y2;

    dx = (x2 - x1);
    dy = (y2 - y1);
    slope = (dy / dx);

    cout<<"Slope of the line with end points ("<<x1<<", "<<y1<<") and ("<<x2<<", "<<y2<<") = ";
    cout<<slope<<"\n";
    system("pause");
}

void prime_number() {
    int num, i, count, n;
    cout<<"Enter maximum range: ";
    cin>>n;
    for (num = 1; num <= n; num++) {
        count = 0;
        for (i = 2; i <= (num/2); i++) {
            if (num % i == 0) {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1) {
            cout<<num<<setw(3);
        }
    }
    cout<<endl;
    system("pause");
}
