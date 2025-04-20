#include <iostream>    //find the rotate the array
using namespace std;
int main()
{
    int  n,temp=n;
    int arr[1,2,3,4,5];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}