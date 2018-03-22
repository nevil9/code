// NMAE : NEVIL VEKARIYA
// ROLLNO : 16BIT059
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

#define size 2
class IC
{
    static int cnt;
    int no;
    float lnt,wth;

public:

    IC()
    {
        cout<<"Enter no of IC: ";
        cin>>no;
        lnt=1;
        wth=1;
        countIC();
    }
    IC(int no,float lnt,float wth)
    {
      this->no=no;
      this->lnt=lnt;
      this->wth=wth;
      countIC();
    }
    ~IC()
    {
        cout<<"\nThis is Destructor:";
    }
    float parimeter();
    float area();
    void show();
    void countIC();
    int isSame(IC &o)
    {
      if(area()==o.area())
        return 1;
      else
        return 0;
    }

};
int IC::cnt=0;

void IC::countIC()
{
    ++cnt;
    cout<<"IC created.\n";
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

    IC a1=IC(1,5,2.5);
    IC a2=IC(2,5,18.9);

    //a[1].IC(2,5,18.9);

    cout<<"\nFirst IC Details: ";a1.show();
    cout<<"\nSecond IC Details: ";a2.show();
    cout<<"\n";

    cout<<"\nFirst IC area: "<<a1.area();
    cout<<"\nSecond IC area: "<<a2.area();
    cout<<"\n";

    cout<<"\nFirst IC perimeter: "<<a1.parimeter();
    cout<<"\nSecond IC perimeter: "<<a2.parimeter();
    cout<<"\n";

    cout<<"\nResult is:"<<a1.isSame(a2);
}

