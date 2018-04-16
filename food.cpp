// NEVIL VEKARIYA

#include<iostream>
#include<conio.h>
using namespace std;

class Food
{
public :

    virtual void getfood()
    {
        cout<<"\nFood";
    }

};

class Chinese :public Food
{
public :

    virtual void getfood()
    {
        cout<<"\nChinese";
        cout<<"\n\t1.Hot and Sour Soup";
        cout<<"\n\t2.Manchurian Dry";
        cout<<"\n\t3.Hakka Noodles";
        cout<<"\n\t4.Szechwan Rice\n";
    }
};

class Panjabi: public Food
{
public :

    virtual void getfood()
    {
        cout<<"\nPanjabi";
        cout<<"\n\t1.Dal Makhni";
        cout<<"\n\t2.Masala channa";
        cout<<"\n\t3.Butter Paneer";
        cout<<"\n\t4.Paneer Tikka Masala\n";
    }
};

class SouthInd : public Food
{
public :

    virtual void getfood()
    {
        cout<<"\nSouthIndian";
        cout<<"\n\t1.Masala Dosa";
        cout<<"\n\t2.Idli Sambar";
        cout<<"\n\t3.Mysore Dosa";
        cout<<"\n\t4.Plain Uttapam\n";
    }
};

class Mexican : public Food
{
public :

    virtual void getfood()
    {
        cout<<"\nMexican";
        cout<<"\n\t1.Cheese Nachos";
        cout<<"\n\t2.Cheese Quesadilla";
        cout<<"\n\t3.Cheese and Bean Burrito";
        cout<<"\n\t4.Mexican rice\n";
    }
};

class Italian : public Food
{
public :

    virtual void getfood()
    {
        cout<<"\nItalian";
        cout<<"\n\t1.Pasta varieties";
        cout<<"\n\t2.Zuppa e salsa";
        cout<<"\n\t3.Antipasto\n";
    }
};

void menu(Food *f1[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        f1[i]->getfood();
    }
}
int main()
{
    Food *f[5];
    f[0]=new Chinese;
    f[1]=new SouthInd;
    f[2]=new Mexican;
    f[3]=new Italian;
    f[4]=new Panjabi;

    cout<<"\nWe served here:\n";
    menu(f,5);

}
