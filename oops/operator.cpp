#include<iostream>
using namespace std;


class rectangle{
public:
float width,height;
public:
//friend void printdimension(rectangle r);
void setdimension(float a,float b)
{width=a;
height=b;}

rectangle operator+(rectangle &rec)
{
rectangle r;
r.width=this->getwidth()+rec.getwidth();
r.height=this->getheight()+rec.getheight();


return r;}

float getheight()
{return height;}
float getwidth()
{return width;}
~rectangle()
{cout<<"\nobject is being destroyed\n";}
};



int main()
{
rectangle r,r2,add;
float a,b,c,d;
cout<<"enter two nos\n";

cin>>a>>b;

cout<<"enter two nos\n";

cin>>c>>d;

 r.setdimension(a,b);
 r2.setdimension(c,d);

add=r+r2;
cout<<"dimension of added rectangle is" <<add.getheight() <<"  and" <<add.getwidth();
//cout<<"\nAra of rectangle is"<<r.getarea(); 
//printdimension(r);
return 0;
}



