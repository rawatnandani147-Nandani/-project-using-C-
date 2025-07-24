#include <iostream>
# include <cmath>
using namespace std;
int main() {
    double num1,num2,r;
   char op;
    cout<<"Beginner level project "<<endl;
    cout<<"Creating a calculator 🧮"<<endl;
    cout<<"creator-Nandani Rawat"<<endl;
    cout<<"#student#coder#Beginers_project🧑‍🎓"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter First NUmber:";
    cin>>num1;
    cout<<"Enter Second Number:";
    cin>>num2;
    cout<<"ENTER YOUR CHOICE:";
    cin>>op;
    switch(op)
    {
        case'+':
        cout<<"CHOICE-ADDITION :"<<endl;
        cout<<"RESULT: "<<num1+num2<<endl;
        break;
        case'-':
           cout<<"CHOICE-SUBTRACTION :"<<endl;
        cout<<"RESULT: "<<num1-num2<<endl;
        break;
        case'*':
         cout<<"CHOICE-MULTIPLICATION :"<<endl;
        cout<<"RESULT: "<<num1*num2<<endl;
        break;
         case'/':
         cout<<"CHOICE-DIVISION :"<<endl;
        cout<<"RESULT: "<<num1/num2<<endl;
        break;
         case'%':
         cout<<"CHOICE-MODULUS :"<<endl;
        cout<<"RESULT: "<<int(num1)%int(num2)<<endl;
        break;
         case'^':
         cout<<"CHOICE-POWER :"<<endl;
        cout<<"RESULT: "<<pow(num1,num2)<<endl;
        break;
        case'r':
        cout<<"Enter Number:";
        cin>>num1;
        if(r>0)
        {
            cout<<"SQUAREROOT OF POSTIVE NUMBER "<<endl;
            cout<<"Enter Number:"<<endl;
            cout<<"RESULT: "<<sqrt(num1)<<endl;
        }
        else
        {
        cout<<"SQUAREROOT OF NEGATIVE NUMBER "<<endl;
       cout<<"RESULT: "<<sqrt(num1)<<endl;
        }
        break;
        default:
        cout<<"RESULT: "<<"INVALID CHOICE "<<endl;;
    }
    cout<<"END OF PROJECT 😀😊 ";
    
    return 0;
} 