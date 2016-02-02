#include<iostream>
using namespace std;

class rectangle{
float x,y;
public:
rectangle( float x,float y)
{cout<<"\nobject is formed\n";
this->x=x;
this->y=y;}

float getarea()
{return x*y;}

int compare(rectangle rect)
{return this->getarea()>rect.getarea();}

~rectangle()
{cout<<"\nobject is being destroyed\n";}

};



int main()
{

float a,b,c,d;
cout<<"enter two nos\n";

cin>>a>>b;

rectangle r(a,b);
cout<<"\nAra of rectangle is"<<r.getarea(); 
cout<<"\nenter two nos for second rectangle\n";

cin>>c>>d;

rectangle r2(c,d);
cout<<"\nAra of rectangle is"<<r2.getarea(); 

if(r.compare(r2))
{cout<<"\narea of 1st rectangle is greater than second\n";
}
else
cout<<"\narea of 2st rectangle is greater than first\n" ;

return 0;
}



