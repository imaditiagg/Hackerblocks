#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];
int k;
cin>>k;
int max=0;
for(i=0;i<n;i++)
{
max=arr[i];
for(j=i;j<k;j++)
{
if(arr[j]>arr[i])
max=arr[j];
}

cout<<max<<" ";


}

return 0;



}
