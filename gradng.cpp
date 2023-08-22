#include<iostream>
using namespace std;

int main()
{
    string name;
    int accountancy, economics,maths, physics, polity;
    int sum=0;
     int average=0;

     cout<<" Enter your name : ";
     getline(cin,name);

     cout<<"Enter grade in accountancy :";
     cin>>accountancy;
     
     cout<<"Enter grade in economics :";
     cin>>economics;
     cout<<"Enter grade in maths :";
     cin>>maths;
     cout<<"Enter grade in Physics :";
     cin>>physics;
     cout<<"Enter grade in polity :";
     cin>>polity;

     sum= accountancy+ economics+ maths+ physics + polity;
      average= sum/5;

      cout<< " Your Average is : "<< average<< endl;

      if( average>=95 && average<=100){
         cout<<" Excellent"<< endl;
      }
      else if( average>=90 && average<=94){
         cout<<"Very Good "<< endl;
      }
      else if( average>=85 && average<=89){
         cout<<" Good"<< endl;
      }
      else if( average>=80 && average<=84){
         cout<<" Very Satisfactory"<< endl;
      }
      else if( average>=75 && average<=79){
         cout<<" Satisfactory"<< endl;
      }
      else{
         cout<<" Poor"<< endl;
      }

return 0;

}
