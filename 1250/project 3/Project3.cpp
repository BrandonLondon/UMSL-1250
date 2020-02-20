
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double principal, rate, amount, interestAmount;
    int timesCompounded;
    string name;
    cout<<"Please enter your name:";
    getline(cin,name);
    cout<<"Enter the principal:";
    cin>>principal;
    cout<<"Enter the interest rate:";
    cin>>rate;
    cout<<"Enter the number of times the interest is compounded:";
    cin>>timesCompounded;
    rate=rate/100;
    amount=principal*pow((1+(rate/timesCompounded)), timesCompounded);
    interestAmount=amount-principal;
    rate=rate*100;
    cout<<setprecision(2)<<fixed;
    cout<<"The interest rate is:"<<setw(9)<<rate<<"%"<<endl;
    cout<<"The amount compounded is:"<<setw(8)<<timesCompounded<<endl;
    cout<<"The principal is:"<<setw(8)<<principal<<endl;
    cout<<"The interest is:"<<setw(8)<<interestAmount<<endl;
    cout<<"The final balance is:"<<setw(8)<<amount<<endl;
    cout<<name<<" has a total of $"<<amount<<" in the savings account";
    return 0;
    
}