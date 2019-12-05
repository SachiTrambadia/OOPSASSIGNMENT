#include<iostream>
#include<limits>

using namespace std;

class exp_handling
{

};
int main()
{
    string city;
	string wheeler;

    cout<<"Enter the name of your CITY where you stay: \n"<<endl;
    cin>>city;

    try
     {
         if(city=="Mumbai"||city=="Pune"||city=="Bangalore"||city=="Chennai")
         {
             cout<<city<<endl;

         }
         else
         {
            throw exp_handling();
         }
     }
     catch(exp_handling e)
     {
         cout<<"Enter any city  Mumbai,Pune,Bangalore and Chennai \n"<<endl;
     }


    cout<<"Enter the type of wheeler: "<<endl;
    cin>>wheeler;


      try
     {
         if(wheeler=="4")
         {
             cout<<wheeler<<endl;
         }
         else
         {
            throw exp_handling();
         }
     }
     catch(exp_handling e)
     {
         cout<<"Enter 4 wheeler \n"<<endl;
     }

   return 0;
}
