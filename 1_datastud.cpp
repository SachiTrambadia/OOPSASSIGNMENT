#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class student
{
    private:
   	char name[40];
	char dob[15];
	char bdg[15];
    char add[70];
	char mob[15];
 	char lic_no[10];

    public:
    	static int count;

    friend class first;

    student()

    {
        char * name=new char[40];
        char *dob=new char[80];
        char *bdg=new char[15];
        strcpy(add,"");
        strcpy(mob,"");
        strcpy(lic_no,"");
    }

    static void recordcount()
    {
        cout<<"\n Total no of records : "<<count<<endl;
    }
 };

class first

	{
    	private:
     	 char cls[70],div[15];

    	public:
     	 first()
    	  {
            strcpy(cls,"");
            strcpy(div,"");

    	  }

    void getdata(student *obj);
    void displaydata(student *obj);

    friend class student;
};

int student::count=0;

void first::getdata(student *obj)

{
    cout<<"\n Enter Name : ";
    cin>>obj->name;
    cout<<"\n Enter DOB (dd/mm/YYYY): ";
    cin>>obj->dob;
    cout<<"\n Enter Blood Group : ";
    cin>>obj->bdg;
    cout<<"\n Enter Branch : ";
    cin>>this->cls;
    cout<<"\n Enter Division: ";
    cin>>this->div;
    cout<<"\n Enter Mobile no : ";
    cin>>obj->mob;
    cout<<"\n Enter Address : ";
    cin>>obj->add;
    cout<<"\n Enter License number: ";
    cin>>obj->lic_no;

    obj->count++;

}

inline void first::displaydata(student *obj)
{
    cout<<"\n*******************************************************************\n";
    cout<<"\t\tSTUDENT DATABASE";
    cout<<"\n*******************************************************************\n";
    cout<<"Name : "<<obj->name<<endl;
    cout<<"DOB : "<<obj->dob<<endl;
    cout<<"Blood Group : "<<obj->bdg<<endl;
    cout<<"Branch : "<<this->cls<<endl;
    cout<<"Division : "<<this->div<<endl;
    cout<<"Mobile no : "<<obj->mob<<endl;
    cout<<"Address : "<<obj->add<<endl;
    cout<<"License Number : "<<obj->lic_no<<endl;
}


int main()

{
    first *p1[30];
    student *p2[30];
    int n=0, c, i;

    do
    {
        cout<<"\n\t Menu";
        cout<<"\n 1.Enter Details of Student";
	cout<<"\n 2.Display Student Details";
	cout<<"\n 3.Exit";
        cout<<"\n Enter your choice: ";
        cin>>c;

        switch(c)

        {
        case 1:
             cout<<"\n Enter Details";
             cout<<"\n";
             p1[n]=new first;
             p2[n]=new student;
             p1[n]->getdata(p2[n]);
             n++;

             student::recordcount();
        break;

        case 2:
            for(i=0;i<n;i++)

            {
            p1[i]->displaydata(p2[i]);
            }

            student::recordcount();
            break;

        case 3:
            break;

        default:

            cout<<"\nENTER RIGHT OPTION!!\n";
            break;
        }

        }

	while(c!=3);
   	 delete *p1;
   	 delete *p2;

    return 0;
}
