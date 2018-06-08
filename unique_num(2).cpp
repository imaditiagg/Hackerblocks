#include <stdio.h>
#include <stdlib.h>

/* This finction sets the values of *x and *y to nonr-epeating
 elements in an array arr[] of size n*/
void get2NonRepeatingNos(int arr[], int n, int *x, int *y)
{
  int xr = arr[0]; /* Will hold xor of all elements */
  int set_bit_no;  /* Will have only single set bit of xor */
  int i;
  *x = 0;
  *y = 0;

  /* Get the xor of all elements */
  for(i = 1; i < n; i++)
   xr ^= arr[i];

  /* Get the rightmost set bit in set_bit_no */
  set_bit_no = xr & ~(xr-1);

  /* Now divide elements in two sets by comparing rightmost set
   bit of xor with bit at same position in each element. */
  for(i = 0; i < n; i++)
  {
    if(arr[i] & set_bit_no)
     *x = *x ^ arr[i]; /*XOR of first set */
    else
     *y = *y ^ arr[i]; /*XOR of second set*/
  }
}

/* Driver program to test above function */
int main()
{
  int arr[] = {3,1,2,};
  int *x = (int *)malloc(sizeof(int));
  int *y = (int *)malloc(sizeof(int));
  get2NonRepeatingNos(arr, 8, x, y);
  printf("The non-repeating elements are %d and %d", *x, *y);
  getchar();
  }
