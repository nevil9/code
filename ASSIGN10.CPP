#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<math.h>
using namespace std;

int gencheck(int x)
{
    int y,flag=0;
	for(int i=2;i<5000;i++)
	{
	     y=(int)(pow(10,i-1)/9);
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
		fout<<s<<" A00093"<<endl;
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
