// Construct Overloading
// Nevil Vekariya
// 16BIT059
#include<iostream>
using namespace std;

class box
{
    int len,wth,hth;
    string color;

public :

    box()
    {
        len=5;
        wth=5;
        hth=5;
    }
    box(int l,int w,int h)
    {
        len=l;
        wth=w;
        hth=h;
    }

    int vol()
    {
        return (len*wth*hth);
    }
};

int main()
{
    box b1;
    box b2(10,12,15);

    int v1=b1.vol();
    int v2=b2.vol();
    cout<<"Volume is :"<<v1<<endl;
    cout<<"Volume is :"<<v2<<endl;

}
