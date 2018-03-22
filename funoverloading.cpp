#include<iostream>
using namespace std;

class account
{
    int bal;
    static int accountNo;
    string name;

public :

    void Set()
    {
        accountNo++;
        cout<<"\nAccount created ";
        cout<<"\nEnter name : ";
        cin>>name;
        cout<<"hello";
        bal=0;
        show();
    }
    void Set(string n,int b)
    {
        accountNo++;
        cout<<"\nAccount created ";
        name=n;
        bal=b;
        show();

    }
    void show()
    {
        cout<<"\n\nAccount Details are:";
        cout<<"\nAccount no:"<<accountNo;
        cout<<"\nAccount holder name:"<<name;
        cout<<"\nCurrent Balance :"<<bal;
    }

};
int account::accountNo=0;
int main()
{
    int i=0,k,b,bal;
    string name;
    account **a;

    do{

    cout<<"\n1) create account";
    cout<<"\n2) delete account";
    cout<<"\n3) Exit";
    cin>>i;
    switch(i)
    {
    case 1:
        cout<<"\nWhat do you want?";
        cout<<"\n1) Zero balance account 2) Account with money ";
        cin>>k;
        if(k==1)
        {
            account a[i];
            a[i].Set();
            ++i;
        }
        else
        {
            cout<<"\nEnter account holder name:";
            cin>>name;
            cout<<"\nEnter deposit value :";
            cin>>bal;
            account a[i];
            a[i].Set(name,bal);
            ++i;
        }
        break;

    case 2:
         cout<<" ";
         break;

    case 3:
         break;

    }

    }while(i!=3);

}

