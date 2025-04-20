
#include <iostream>
#include <climits>         // PRINT THE ARRAY OF MIN VALUE AND MAX VALUE;
using namespace std;
int main()
{
    int arr[5]={78,56,45,789,12};
    int ans=INT_MAX;             // MIN VALUE;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans<<endl;

    ans=INT_MIN;                //MAX VALUE;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
}

 
   

