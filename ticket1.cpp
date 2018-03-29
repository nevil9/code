//NEVIL VEKRIYA
/* Problem Statement:- Me, deciding my day lucky or unlucky on my bus ticket number. If number contains same latter twice then day is lucky otherwise unlucky.
   https://www.codechef.com/problems/TICKETS5 */

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<vector>
#include<string.h>
using namespace std;

 class Ticket
 {
 protected:

    vector<char> tckNo;
    char ch='a';

 public:

    void getTicket()
    {
       cout<<"\nEnter your Ticket No.:";
       for(int i=0;(int)ch!=13;i++)
       {
           ch=getch();
           tckNo.push_back(ch);
           cout<<ch;
       }
       cout<<"\n";
    }

    int check()
    {
       char m='a';
       int i=tckNo.begin();
       for(; i!=tckNo.size();i++)
       {
           m=tckNo[i];
           int j=tckNo.begin()+1;
           for(; j!=tckNo.size();j++)
           {
               if(tckNo[j]==m)
               {
                   return 1;
               }
               else
               {
                   return 0;
               }
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

    void prediction()
    {
        cout<<"\nHuurreee!! Your day gonna awesome !";
    }
 };


 class Unlucky: public Ticket
 {
 public :

    void prediction()
    {
        cout<<"\nSorry, Your day is unlucky.\n\n";
    }

 };

 int main()
 {
     int i;
     char *c;
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
         Ticket *t=new Unlucky;
         t->prediction();
     }
 }
