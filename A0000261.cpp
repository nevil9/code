#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<math.h>
using namespace std;
int gen(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return n*gen(n-1)+(n+3)*gen(n-2);

}
int gencheck(int x)
{
    int y,flag=0;
	for(int i=1;i<37;i++)
	{
	     y=gen(i);
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
    fout.open("new.txt");
    while(!fin.fail())
    {
	fin>>n;
	while(!fin.eof())
	{
	    if(gencheck(n)==1)
	    {
			fout<<n;
		fin.getline(s,10000,'\n');
		fout<<s<<" A000261"<<endl;
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
    A00093("numbers.txt");
    getch();
}
