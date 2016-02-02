#include<iostream>
using namespace std;

class rectangle{
float width,height;
public:
rectangle(float x,float y)
{cout<<"\nobject is formed\n";
width=x;
height=y;}

float getarea()
{return width*height;}

~rectangle()
{cout<<"\nobject is being destroyed\n";}

};



int main()
{

float a,b;
cout<<"enter two nos\n";

cin>>a>>b;

rectangle r(a,b);
cout<<"\nAra of rectangle is"<<r.getarea(); 

return 0;
}



