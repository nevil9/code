/*
	Name : Nevil Vekariya
	Roll no : 16BIT059
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Stack
{
	int x[100];
	int s[5];
	int tos1,tos2;
	public :

	     Stack()
	      {
		     tos1=-1;
		     tos2=-1;
	      }

	      void push()
	      {
		    int a,i,j=0;
		    cout<<"Enter the number : "<<endl;
		    cin>>a;
		    tos1++;
		    s[tos1]=a;

            if(tos1==4)
		     {
		       resetStack(int j);
		     }
		    else
		    {
               print();
		    }
		}

		void resetStack(int j)
		{
		    int i;
		    tos2++;
		      for(i=tos2;i<=tos2+4;i++)
		       {
			     x[i]=s[j];
                 j++;
		       }
              tos2=tos2+4;
		      tos1=-1;

		      cout<<"After resetting stack:";
		      cout<<"Stack 1 :::: "<<endl;
		      cout<<"Stack 2 :: ";

		     for(i=0;i<=tos2;i++)
		     {
		       cout<<x[i]<<" ";
		     }
             cout<<endl;

		}
		void print()
		{
             int i;
             cout<<"Stack 1:: ";
		     for(i=tos1;i>=0;i--)
             {
		       cout<<s[i]<<" ";
             }
		     cout<<endl;
		}
		void pop()
		{
		    cout<<"The Poped element is "<<s[tos1]<<endl;
		    tos1--;
		}

};
int main()
{
	Stack st;
	int c=0;

	while(c!=3)
	{
	     cout<<"What do you want? \n1. Push \n2. Pop \n3. Exit";
	     cin>>c;
	     switch(c)
	     {
	    	case 1 : st.push();
	    	break;
		    case 2 : st.pop();
	    	break;
	     	case 3 :
		    break;
	     	default :
	     	     cout<<"Wrong case "<<endl;
	     }
	}

}
