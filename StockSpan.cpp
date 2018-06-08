// a linear time solution for stock span problem
#include <iostream>
#include <stack>
using namespace std;

// A stack based efficient method to calculate stock span values
void calculateSpan(int price[], int n, int S[])
{
// Create a stack and push index of first element to it
stack<int> st;
st.push(0);

// Span value of first element is always 1
S[0] = 1;

// Calculate span values for rest of the elements
for (int i = 1; i < n; i++)
{
	// Pop elements from stack while stack is not empty and top of
	// stack is smaller than price[i]
	while (!st.empty() && price[st.top()] <= price[i])
		st.pop();

	// If stack becomes empty, then price[i] is greater than all elements
	// on left of it, i.e., price[0], price[1],..price[i-1]. Else price[i]
	// is greater than elements after top of stack
	S[i] = (st.empty())? (i + 1) : (i - st.top());

	// Push this element to stack
	st.push(i);
}
}

// A utility function to print elements of array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	cout << arr[i] << " ";

	cout<<endl;
}

// Driver program to test above function
int main()
{
	int t;
	cin>>t;
	int n[t];
	int Price[t][50]={0},S[50]={0},P[50]={0};
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











