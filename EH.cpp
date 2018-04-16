#include <iostream>
#include <stdio.h>
using namespace std;

template<class x>
class Dis
{
    x inch;
    x feet;
public:

    class inchEx();
    void get(x,x);
    void show();
    x cal();

};
template<class x>
void Dis<x>:: get(x feet,x inch)
{
    if(inch<=12.0)
    {
        this->feet=feet;
        this->inch=inch;
    }
    else
    {
       throw inchEx();
       cout<<"\nImproper Input.";
    }

}

template<class x>
void Dis<x> ::show()
{
    cout<<"\nFeet   : "<<feet;
    cout<<"\nInches : "<<inch;
}
template<class x>
x Dis<x>::cal()
{
    return(feet*0.3048 + inch*0.0254);
}

int main()
{
  int a;
  float b;
  try{
  Dis <int>d1;
  d1.get(20,13);
  d1.show();
  a=d1.cal();
  cout<<"\n"<<a;

  Dis <float>d2;
  d2.get(10.2,4.67);
  d2.show();
  d2.cal();
  b=d2.cal();
  cout<<"\n"<<b;
  }
}
