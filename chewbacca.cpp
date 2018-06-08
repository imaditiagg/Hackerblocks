#include<iostream>
using namespace std;
void func(int num)
{
long int rem;
if(num==9) //since it shouldn't contain leading zeroes
{
cout<<num;
return;
}
if(num==0)
{
    return;
}

rem=num%10;
if(rem>=5 && rem<=9)
rem = 9-rem;
num=num/10;
func(num);
cout<<rem;
}


int main()
{
long int n;
cin>>n;
func(n);
return 0;

}
