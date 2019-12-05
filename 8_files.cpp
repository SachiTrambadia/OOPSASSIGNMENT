#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char ch;
fstream f;
f.open("oop_files.txt",ios::out);
if(!f)
{
cout<<"Enter the opening file"<<endl;
return 0;
}
cout<<"file name oop_files.txt is created !!!"<<endl;
f<<"This_program_make_us_understand_the _concept_of_file_handling"<<endl;
f.close();
f.open("oop_files.txt",ios::in);
if(!f)
{
cout<<"Error opening the file"<<endl;
return 0;
}
while(!f.eof())
{
f>>ch;
cout<<ch;
}
f.close();
return 0;
}
