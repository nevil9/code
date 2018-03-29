#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Ticket
{
protected :
    string tckNo;

public:

    Ticket()
    {
        cout<<"\nEnter your ticket No.:";
        cin>>tckNo;
    }

    int check()
    {
        int n=0;
        char m;
        for(int i=0;i!=tckNo.length();i++)
        {
            m=tckNo.at(i);
            for(int j=tckNo.at(i+1);j!=tckNo.length();j++)
            {
                if(m==tckNo.at(j))
                {
                    n=1;
                }
                else
                {
                    n=0;
                }
            }
        }
        return n;
    }

    void prediction()
    {
        cout<<"\nOops!!! I can't predict it.";
    }

};

class lucky:public Ticket
{
public:

     void prediction()
     {
        cout<<"\nHuurree!!!!Your day gonna awesome!\n";
     }
};

class unlucky: public Ticket
{
public :

    void prediction()
    {
        cout<<"\nSorry!! Your day is unlucky!\n";
    }
};

int main()
{
    int i=0;
    Ticket t;
    cout<<"sdf";
    i=t.check();

    if(i==1)
    {
        Ticket *t=new lucky;
        t->prediction();
    }
    else
    {
        Ticket *t=new unlucky;
        t->prediction();
    }
}
