// sorting the array using buble sort;

#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of number:";
    cin>>n;
    cout<<"enter the element of array:";

    for(int i=0;i<n;i++)   
    {
        cin>>arr[i];
    }
    for(int i=n-2;i>=0;i--)   // outer parts
    {
        bool swapped=0;
        for(int j=0;j<=n;j++)    // ener parts
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
            break;
    }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    } 