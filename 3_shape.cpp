#include<iostream>
using namespace std;
class shape	
 {
    public:
     double side1,side2;

     void get_data ()
        {
        cin>>side1>>side2;
        }
    virtual void display_area () = 0;
 };
 
class Triangle:public shape	

 {
      public:

      void display_area ()

    {
        cout<<"Area of Triangle of base "<<side1<<" and height "<<side2<<" is:"<<0.5*side1*side2<<endl;
    }
 };
 
  class Rectangle:public shape 	

	{
    	public: 

           void display_area ()
   	{
          cout<<"Area of Rectangle of length "<<side1<<" and breadth "<<side2<<" is:"<<side1*side2<<endl;
        }
    };
 
   int main()			
    {   

    	Triangle x;
    	shape *tri = &x;
    	cout<<"Enter first base and then height of TRIANGLE : \n";
    	tri->get_data();
    	tri->display_area();
     
    	Rectangle y;
    	shape *rec = &y;
    	cout<<"Enter first length and then breadth of RECTANGLE:\n ";
    	rec->get_data();
    	rec->display_area();


    return 0;   
}

