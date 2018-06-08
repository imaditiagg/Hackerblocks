#include<iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    x=a[0];
    for(int j=1;j<n;j++)
    {
    x= x^a[j];
    }
    cout<<x;

    return 0;
}
