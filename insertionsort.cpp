using namespace std;
#include<iostream>
int main()
{
    int a[20],N;
    int temp,j;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
        cout<<endl;

  for(int i=1; i<N;i++)
    {
        temp=a[i];
        j=i-1;
       while( temp<a[j]&&j>=0 )
       {    a[j+1]=a[j];
              j--;
       }
       a[j+1]=temp;
 }


    for(int i=0;i<N;i++)
        cout<<a[i]<<"\n";


    return 0;
  }
