#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int a[],int n,int key)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==key)
        {
            return true;
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else if(a[mid]<key)
        {
            l=mid+1;
        }
    }

    return false;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key);
    return 0;
}