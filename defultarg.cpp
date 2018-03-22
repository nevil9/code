#include<iostream>
using namespace std;

class account
{
    int bal;
    static int accountNo;
    string name;

public :

    account()
    {
        accountNo++;
        cout<<"\nAccount created ";
        cout<<"\nEnter name : ";
        cin>>name;
        bal=0;
        show();
    }
    account(string name,int bal)
    {
        accountNo++;
        cout<<"\nAccount created ";
        this->name=name;
        this->bal=bal;
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
    account *a;

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
            ++i;
        }
        else
        {
            cout<<"\nEnter account holder name:";
            cin>>name;
            cout<<"\nEnter deposit value :";
            cin>>bal;
            account a[i]=account(name,bal);
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

