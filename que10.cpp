#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the both dimension :";
    cin>>m>>n;
    vector <int> a[m][n];
    vector <int> b[m][n];
    vector <int> c[m][n];
    //a.fill(0,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            //a.push_back();
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=i+j;
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }





}
