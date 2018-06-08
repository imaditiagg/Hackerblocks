#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
 int set_bit_no;
 int x=arr[0];
for(int i = 1; i < n; i++)
   x ^= arr[i]; //get the xor of all the elements

    /* Get the rightmost set bit in set_bit_no */
  set_bit_no = x & (-x);


 int z=0,y=0;

 for(int i = 0; i < n; i++)
  {
    if(arr[i] & set_bit_no)
     z= z ^ arr[i]; /*XOR of first set */
    else
     y = y ^ arr[i]; /*XOR of second set*/
  }



cout<<y<<" "<<z;
return 0;
}







