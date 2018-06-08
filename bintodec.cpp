#include<iostream>
using namespace std;
int main()
{

int num,dec=0,base=1,r=0;
cin>>num;

while(num>0)
{

r=num%10;
dec=dec+ r*base;
base=base*2;
num=num/10;
}
cout<<dec;
return 0;


}
