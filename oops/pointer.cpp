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


};



int main()
{

float a,b,c,d;
cout<<"enter two nos\n";

cin>>a>>b;

rectangle r(a,b);

cout<<"\nenter two nos for second rectangle\n";

cin>>c>>d;
rectangle r2(c,d);
rectangle *ptr;
ptr=&r;
cout<<"\nAra of first rectangle is"<<ptr->getarea(); 
ptr=&r2;
cout<<"\nAra of second rectangle is"<<ptr->getarea(); 
return 0;
}



