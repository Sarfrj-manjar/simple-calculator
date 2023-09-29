#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"Enter 1st no : ";
    cin>>num1;
    cout<<"Enter which operation you want to do + or - or * or / : ";
    cin>>op;
    cout<<"Enter the 2nd no : ";
    cin>>num2;
    switch(op)
    {
        case'+':
            cout<<"The sum of 2 number is : "<<num1+num2;
            break;
        case'-':
            cout<<"The substration of 2 number is : "<<num1-num2;
            break;
        case'*':
            cout<<"The Multiplication of 2 number is : "<<num1*num2;
            break;
        case'/':
            cout<<"The division of 2 number is : "<<num1/num2;
            break;
        default:
            cout<<"Enetr operation is wrong ";
            break;
    }
}