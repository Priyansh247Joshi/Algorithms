#include<iostream>
using namespace std;
int binarysearch(int arr[],int start,int ending,int x)
{
    if(ending>=1)
    {
        int mid=start+(ending-1)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return binarysearch(arr,0,mid-1,x);
        return binarysearch(arr,mid+1,ending,x);
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x;
    cin>>x;
    int result=binarysearch(arr,0,n-1,x);
    if(result==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at index: "<<result;
    return 0;
}
