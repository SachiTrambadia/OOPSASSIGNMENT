#include<iostream>
using namespace std;
class Complex
{
 float real;
 float imag;

  public:
   Complex()
     {
       real=0;
       imag=0;
     }

 Complex operator+(Complex);
 Complex operator*(Complex);

  friend istream &operator >>(istream &input,Complex &t)
   {
     cout<<"Enter its real part:";
     input>>t.real;
      cout<<"Enter its imaginary part:";
     input>>t.imag;
   }


  friend ostream &operator <<(ostream &output,Complex &t)
    {

      output<<t.real<<"+"<<t.imag<<"i\n";

    }
  };


 Complex Complex :: operator+ (Complex c)

  {
   Complex temp1;
   temp1.real=real+c.real;
   temp1.imag=imag+c.imag;

   return(temp1);
 }


  Complex Complex :: operator* (Complex c)

   {
     Complex temp2;
     temp2.real=(real*c.real)-(imag*c.imag);
     temp2.imag=(imag*c.real)+(real*c.imag);

     return (temp2);
   }


   int main()

  {
    Complex c1,c2,c3,c4;
    cout<<"Default constructor value =\n";
    cout<<c1;
    cout<<"\nFor 1st complex number\n";
    cin>>c1;
    cout<<"\nFor 2nd complex number\n";

	cin>>c2;
	c3=c1+c2;
	c4=c1*c2;


	cout<<"\nThe First complex number in (a+bi) form is: ";
	cout<<c1;
	cout<<"\nThe Second complex number in (a+bi) form is: ";
	cout<<c2;
	cout<<"\nThe Addition of complex numbers is : ";
	cout<<c3;
	cout<<"\nThe Multiplication of complex numbers is: ";
	cout<<c4;


     return 0;
}

