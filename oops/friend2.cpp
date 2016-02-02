#include<iostream>
using namespace std;

class square;
class rectangle{
float width,height;
public:
friend void printdimension(rectangle r,square sq);
rectangle(float x,float y)
{cout<<"\nobject is formed\n";
width=x;
height=y;}

~rectangle()
{cout<<"\nobject is being destroyed\n";}
};


class square{
float side;
public:
friend void printdimension(rectangle r,square sq);
square(float side)
{cout<<"\nobject is formed\n";
this->side=side;}


~square()
{cout<<"\nobject is being destroyed\n";}
};
void printdimension(rectangle r,square sq)
{cout<<"\nwidth of rectangle is "<<r.width<<" and height is "<<r.height;
cout<<"\nwidth of square is "<<sq.side<<" and height is "<<sq.side;

}


int main()
{

float a,b,c;
cout<<"enter two nos\n";

cin>>a>>b;

rectangle r(a,b);
cout<<"enter side of square\n";
cin>>c;
square s(c);
//cout<<"\nAra of rectangle is"<<r.getarea(); 
printdimension(r,s);
return 0;
}



