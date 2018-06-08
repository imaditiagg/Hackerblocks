// C program for brute force method to calculate stock span values
#include <iostream>
using namespace std;

// Fills array S[] with span values
void calculateSpan(int price[], int n, int S[])
{
   // Span value of first day is always 1
   S[0] = 1;

   // Calculate span value of remaining days by linearly checking
   // previous days
   for (int i = 1; i < n; i++)
   {
      S[i] = 1; // Initialize span value

      // Traverse left while the next element on left is smaller
      // than price[i]
      for (int j = i-1; (j>=0)&&(price[i]>=price[j]); j--)
          S[i]++;
   }
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
     cout<<arr[i]<<" ";
}

// Driver program to test above function
int main()
{
	int t;
	cin>>t;
	int n[t];
	int Price[t][50],S[50],P[50];
	for(int i=0;i<t;i++)
        {
            cin>>n[i];
            for(int j=0;j<n[i];j++)
                cin>>Price[i][j];
        }

     for(int j=0;j<t;j++)
     {
         for(int k=0;k<n[j];k++)
         {

                P[k]=Price[j][k];

         }
         calculateSpan(P,n[j],S);
                printArray(S,n[j]);
     }

        return 0;
}
