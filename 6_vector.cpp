#include<iostream>
using namespace std;

template<class T>
class vector
{
    T v[20];
    int size;

    public:
        void create();
        void modify();
        void multi();
        void display();
};

template<class T>
void vector<T>::create()
{
    int i;
    T value;
    string ans;
    size=0;
    do
    {
        cout<<"\nEnter the index position & value:";
        cin>>i>>value;
        v[i]=value;
        size++;
        cout<<"\nDo you want to insert more elements (Y/N)?";
        cin>>ans;
    }

    while(ans=="y"||ans=="Y"||ans=="yes");
}

template<class T>
void vector<T>::modify()
{
    int key;
    T new_val;
    cout<<"\nEnter index you want to modify:";
    cin>>key;
    cout<<"\nEnter new value:";
    cin>>new_val;
    v[key]=new_val;
}

template<class T>
void vector<T>::multi()
{
    int i;
    int scalar_val;
    cout<<"\nEnter scalar value for multiplication :";
    cin>>scalar_val;
    for(i=0;i<size;i++)
    v[i]=v[i]*scalar_val;
}

template<class T>
void vector<T>::display()
{
    int i;

    cout<<"\nSize of vector is:"<<size;
    cout<<"\nElements in vector are:";
    cout<<"(";
    for(i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}

int main()
{
    int ch;
    vector<int>obj;
    cout<<"\nVector Program";
    do
    {
        cout<<"\nMAIN MENU";
        cout<<"\n1.Create a vector";
        cout<<"\n2.Display your vector";
        cout<<"\n3.Multiply vector by scalar value";
        cout<<"\n4.Modify a value of given element";
        cout<<"\n0.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;

        switch(ch)
        {
            case 1:
                obj.create();
                break;

            case 2:
                obj.display();
                break;

            case 3:
                obj.multi();
                break;

            case 4:
                obj.modify();
                break;

            case 0:
                cout<<"\nExit\n";
                break;

            default:
                cout<<"\nInvalid choice";
                break;
        }
    }
    while(ch!=0);

    return 0;
}
