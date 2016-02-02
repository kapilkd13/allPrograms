#include<iostream>
using namespace std;

class student
{
int roll,m1,m2,m3;
string name;
float avg;

public:
void get_data(int ,string n );
void get_marks(int ,int ,int );
float average()
{
   return (m1+m2+m3)/3;
}

void output();

}s;


void student::get_data(int x,string n) 
{
roll=x;
name=n;
}

void student::get_marks(int x,int y,int z)
{
m1=x;
m2=y;
m3=z;
}

void student::output()
{
 cout<<"name="<<name<<"\n";
 cout<<"roll="<<roll<<"\n";
 cout<<"avg="<<average()<<"\n";
}

int main()
{
string n;
int r,m1,m2,m3;
cout<<"Enter name:";
cin>>n;
cout<<"Enter roll no:";
cin>>r;
cout<<"Enter marks:";
cin>>m1>>m2>>m3;
s.get_data(r,n);
s.get_marks(m1,m2,m3);

s.output();

return 0;
}

