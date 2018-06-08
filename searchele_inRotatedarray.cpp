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

int binarysearch(int *a,int s,int e,int key)
{
       ///Binary Search

int mid=0;;
   while(s<=e)
    {

        mid = (s+e)/2;


        if(a[mid]==key)
        {

           return mid;
        }
        else if(a[mid]>key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

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
int key;
cin>>key;
int x;
x=searchpivot(a,0,n-1); //return the index of pivot
if(a[x]==key)           //checking the location of key wrt pivot
    cout<<x;
else if(key<a[x] && key >=a[0])
    cout<<binarysearch(a,0,x-1,key);
else
    cout<<binarysearch(a,x+1,n-1,key);
return 0;
}
