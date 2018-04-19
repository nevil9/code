#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 20
using namespace std;

class messanger
{
   int id;
   char name[15];

   public:

       void setDetail()
       {
          cout<<"Enter name and id:";
          cin>>name>>id;
       }

       void showDetail()
       {
           cout<<"\nName and id is:"<<name<<" "<<id;
       }
       int getid()
       {
           return id;
       }
       char getname()
       {

       }

};
class message
{
    string msg;
    int src,dst;

public:

    void creatmsg()
    {
        cout<<"\nEnter message:";
        cin>>msg;
        cout<<"\nEnter source and destination:";
        cin>>src>>dst;

    }

    string getmsg()
    {
        return msg;
    }
    int getsrc()
    {
        return src;
    }
    int getdst()
    {
        return dst;
    }
};
int main()
{
    int i=0;
    messanger m[3];
    message m1[MAX];

    for(i=0;i<3;i++)
    {
        m[i].setDetail();
    }

    cout<<"\nNode Details is:";
    for(i=0;i<3;i++)
    {
        m[i].showDetail();
    }

    i=0;
    do{

    cout<<"\n\nMESSANGER BEGINS HERE:";
    m1[i].creatmsg();

    if(m1[i].getmsg()!="stop")
    {
        cout<<"\nSending message "<<m1[i].getmsg()<<" to destination Node id "<<m1[i].getdst();
        cout<<"\nReceived message "<<m1[i].getmsg()<<" from source Node id "<<m1[i].getsrc();
        ++i;
    }
    else
    {
        cout<<"Total number of message transmitted "<<i<<"\n";
    }

    }while( strcmp(m1[i].getmsg(),"stop")!=0 );

    return 0;
}

