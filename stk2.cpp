/*
	Name : Nevil Vekariya
	Roll no : 16BIT059
*/
#include<iostream>
#include<conio.h>
using namespace std;

class Stack
{
	int static buffer[100];
	int s[5];
	int tos1,tos2,i,j=0;
	public :

	     Stack()
	      {
		     tos1=-1;
		     tos2=-1;
		     tos1++;
		     s[tos1]=5;
             show1();

	      }
	      ~Stack()
	      {
	          cout<<"Buffer data is: ";
	          for(i=0;i<=tos2;i++)
              {
                  cout<<" "<<buffer[i];
              }
	      }

	      void push()
	      {
		    int a;
		    cout<<"Enter the number : ";
		    cin>>a;
		    tos1++;
		    s[tos1]=a;

            if(tos1==4)
            {
              resetStack();
		    }
		    else
		    {
		     show1();
		    }

		}
		void resetStack()
		{
		    j=0;
		    tos2++;
		    for(i=tos2;i<=tos1+tos2;i++)
		    {
		        buffer[i]=s[j];
		        j++;
		    }
		    tos2=tos1+tos2;
		    tos1=-1;

		    cout<<"Stack is reseted.\n";

		}

		void show1()
		{
		    cout<<"Stack 1:: ";
		    for(i=tos1;i>=0;i--)
		    {
		      cout<<s[i]<<" ";
		    }
		    cout<<endl;

		}

		void show2()
		{
		    cout<<"Stack 2:: ";
		    for(i=0;i<tos2;i++)
            {
                cout<<buffer[i]<<" ";
            }
		    cout<<endl;
		}

		void pop()
		{
		    cout<<"The Poped element is "<<s[tos1]<<endl;
		    tos1--;
		}

};
int Stack :: buffer[100];

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
