#include<iostream>
#include<limits>
using namespace std;
template <class Tem>
Tem selection()
{
    Tem arr[50];
    Tem temp;
    int n;

    cout<<"\n Enter No of Elements you want in your array : "<<endl;
    cin>>n;
    cout<<"\n Enter your array elements :"<<endl;

    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        int  min=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min])
           min=j;
       }
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;

    }
cout<<"\n Your sorted array is:\n";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}

int main()
 {
	cout<<"\n ***INTEGER SORTING*** "<<endl;
	selection<int>();

	cout<<"\n ***FLOAT SORTING***"<<endl;
	selection<float>();


    return 0;
 }

