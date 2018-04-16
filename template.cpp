// Balaguruswami pg no.
// Nevil Vekariya 16BIT059

#include <iostream>
#include <stdio.h>
using namespace std;
int arr[100];

template <class x> x Min(x n)
{
    x m=arr[0];
    for(int i=0;i<n;i++)
    {
       if(arr[i]<m)
            m=arr[i];
    }
    return m;
}

int main()
{
    int n,c;
    cout<<"\nEnter no of elements you want to store.";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    c=Min(n);

    cout<<"\nMinimum value among all is : "<<c;

}
