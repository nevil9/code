//NEVIL VEKRIYA
// https://www.codechef.com/problems/TICKETS5

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;

 class Ticket
 {
 protected:

    char tckNo[20],ch='a';

 public:

    void getTicket()
    {
       for(int i=0;i<20;i++)
       tckNo[i]==NULL;

       cout<<"\nEnter your Ticket No.:";
       for(int i=0;(int)ch!=13;i++)
       {
           ch=getch();
           tckNo[i]=ch;
           cout<<ch;
       }

    }

    int check()
    {
       char m;
       for(int i=0;tckNo[i]==NULL;i++)
       {
           m=tckNo[i];
           for(int j=i+1;tckNo[j]==NULL;j++)
           {
               cout<<"sdf";
               if(tckNo[j]==m)
                   return 1;
               else
                   return 0;
           }

       }
    }

    virtual void prediction()
    {
        cout<<"\nNo prediction yet.";
    }
 };

 class Lucky : public Ticket
 {
 public :

    virtual void prediction()
    {
        cout<<"\nHuurreee!! Your day gonna awesome !";
    }
 };


 class Unlucky: public Ticket
 {
 public :

    virtual void prediction()
    {
        cout<<"\nSorry, Your day is unlucky.";
    }

 };

 int main()
 {
     int i;
     Ticket t1;
     t1.getTicket();
     i=t1.check();
     cout<<i;

     if(i==1)
     {
         Ticket *t=new Lucky;
         t->prediction();
     }
     else
     {
         cout<<"sdf";
         Ticket *t=new Unlucky;
         t->prediction();
     }
 }
