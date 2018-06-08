#include<iostream>
using namespace std;

int searchpivot(int *a,int s,int e)
{
int mid;
while(s<=e)
{
mid =(s+e)>>1;

if(mid>0 && mid<e && a[mid]>a[mid-1] && a[mid]>a[mid+1])
return mid;

if(mid>0 && mid<e && a[mid]<a[mid-1] && a[mid]<a[mid+1])
return mid-1;

if(a[mid]>a[s])
s=mid+1;
else
e=mid-1;



}
return -1;

}


int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}

cout<<searchpivot(a,0,n-1); //return the index of pivot
return 0;
}
