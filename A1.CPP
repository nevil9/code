#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class vector
{
  float v[3],m[3];
  int i;

  public:
  void create()
  {
    cout<<"Enter value of each dimensions:";
    cin>>v[0]>>v[1]>>v[2];
    show();
  }
  void scaling(float s)
  {
    for(i=0;i<3;i++)
    {
      v[i]=v[i]*s;
    }
    show();
  }
  void show()
  {
    cout<<"\nVector is:";
    for(i=0;i<3;i++)
    {
      cout<<" "<<v[i];
    }
  }
  float magn()
  {
    cout<<"\nMagnitude is:";
    for(i=0;i<3;i++)
    {
      m[i]=v[i]*v[i];
    }
    return sqrt(m[0]+m[1]+m[2]);
  }
};

int main()
{
  float sc,mag;
  vector v1;

  v1.create();
  cout<<"\nEnter scalar value:";
  cin>>sc;
  v1.scaling(sc);
  mag=v1.magn();
  cout<<mag;


}
