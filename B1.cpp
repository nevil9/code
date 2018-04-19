// NAME: NEVIL
// ROLLNO: 16BIT059

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

#define size 2
class IC
{
    int no;
    float lnt,wth;

public:

    void Set(int,float,float);
    float parimeter();
    float area();
    void show();

    int isSame(IC &o)
    {
       if(area()==o.area())
          return 1;
       else
          return 0;
     }

};
void IC::Set(int nu,float l,float w)
{
    no=nu;
    lnt=l;
    wth=w;
}

float IC::parimeter()
{
    return (2*lnt+2*wth);
}

float IC::area()
{
    return lnt*wth;
}

void IC::show()
{
    cout<<"\nIC number is: "<<no;
    cout<<"\nLength is: "<<lnt;
    cout<<"\nWidth is: "<<wth;
    cout<<"\n";
}


int main()
{
    int i;
    IC a[size];

    a[0].Set(1,5,2.5);
    a[1].Set(2,5,18.9);

    cout<<"\nFirst IC Details:";
    a[0].show();
    cout<<"\nSecond IC Details:";
    a[1].show();

    cout<<"\nFirst IC area: \n"<<a[0].area();
    cout<<"\nSecond IC area: \n"<<a[1].area();

    cout<<"\nFirst IC perimeter: "<<a[0].parimeter();
    cout<<"\nSecond IC perimeter: "<<a[1].parimeter();
}

