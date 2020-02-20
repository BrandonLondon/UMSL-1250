//============================================================================
// Name        : PROJECT6TEST.cpp
// Author      : Brandon London
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

void cast(int);

int flag=0;
int main() {

int ch,i=0;
char choice;
do
{
   srand( time( NULL ) );

cout<<"Menu:\n"<<endl;
cout<<"1.Rock"<<endl;
cout<<"2.Paper"<<endl;
cout<<"3.Scissors"<<endl;
cout<<"Please enter your choice : "<<endl;
cin>>ch;
if(ch<1||ch>3)
   continue;
   flag=0;
   cast(ch);
if(flag==1)
{
   cout<<"Oh boy, a tie. Pick better next time."<<endl;
   continue;
}

cout<<"Do you want to play again ? (y/n)" <<endl;
cin>>choice;
if(choice=='n'||choice=='N')
i=1;
}while(i==0);
cout<<"Thanks for playing!"<<endl;
   return 0;
}

void cast(int ch)
{
      int num = (rand() % 3) + 1;
      cout <<"\nThe system has chosen : ";
      switch(num)
      {
       case 1: cout<<"Rock!";
               if(ch==1)
               {flag=1;
                 cout<<"\nYour choice : Rock";
               break;
               }
               else if(ch==2)
               {
                  cout<<"\nYour choice : Paper";
                  cout<<"\nWinner winner chicken dinner! \n";
                  break;
               }
               else
               {
                 cout<<"\nYour choice : Scissors";
                  cout<<"\nYou Lost the game!! \n";
                  break;
               }

       case 2: cout<<"Paper!";
               if(ch==1)
               { cout<<"\nYour choice : Rock";
               cout<<"\nYou won! just joking you lost! \n";
               break;
               }
               else if(ch==2)
               { flag=1;
                  cout<<"\nYour choice : Paper";
                  break;
               }
               else
               {
                 cout<<"\nYour choice : Scissors";
                  cout<<"\nYou Win!! \n";
                  break;
               }

       case 3: cout<<"Scissors!";
               if(ch==1)
               { cout<<"\nYour choice : Rock";
               cout<<"\nYou Win!!"<<endl;
               break;
               }
               else if(ch==2)
               {
                  cout<<"\nYour choice : Paper";
                  cout<<"\nYou Lose!!"<<endl;
                  break;
               }
               else
               {flag=1;
                 cout<<"\nYour choice : Scissors";
                  break;
               }

       default : break;


      }
}

