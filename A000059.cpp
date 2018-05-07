#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<math.h>
using namespace std;

int isprime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    return c;
}
int gencheck(int x)
{
    int y,flag=0,num;
	for(int i=2;i<50;i++)
	{
	     num=((pow(2*i,4))+1);
	     if(isprime(num)==1)
            if(y==x)
                flag=1;
	}
	if(flag==1)
        return 1;
	else
        return 0;
}



void A00093(char *filename)
{
    ifstream fin;
    ofstream fout;
    char s[100];
    fin.open(filename);
    long n;
    fout.open("New.txt");
    while(!fin.fail())
    {
	fin>>n;
	while(!fin.eof())
	{
	    if(gencheck(n)==1)
	    {
			fout<<n;
            fin.getline(s,10000,'\n');
            fout<<s<<" A000059"<<endl;
            break;
	    }
	    else
	    {
            fout<<n;
            fin.getline(s,10000,'\n');
            fout<<s<<endl;
            break;
	    }
	}

    }
    fin.close();
    fout.close();
    //remove(filename);
    //rename("new.txt",filename);
    cout<<"Successfull"<<endl;

}
int main()
{
//clrscr();
    A00093("number.txt");
    getch();
}
