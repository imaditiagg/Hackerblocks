// C++ program for left rotation of matrix by 90
// degree without using extra space
#include<bits/stdc++.h>
using namespace std;

// After transpose we swap elements of column
// one by one for finding left rotation of matrix
// by 90 degree
void reverseColumns(int arr[][50],int N)
{
    for (int i=0; i<N; i++)  //for columns
        for (int j=0,  k=N-1; j<k; j++,k--) //for swapping
            swap(arr[j][i], arr[k][i]);
}


// Function for do transpose of matrix
void transpose(int arr[][50],int N)
{
    for (int i=0; i<N; i++)
        for (int j=i; j<N; j++)
            swap(arr[i][j], arr[j][i]);
}

// Function to print matrix
void printMatrix(int arr[][50],int N)
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            cout << arr[i][j] << " ";
        cout<<'\n';
    }
}


void rotate90(int arr[][50],int N)
{
    transpose(arr,N);
    reverseColumns(arr,N);
}

int main()
{
    int N;
    cin>>N;
    int arr[50][50];
        for(int i=0;i<N;i++)
    {

        for(int j=0;j<N;j++)
            cin>>arr[i][j];
    }



    rotate90(arr,N);
    printMatrix(arr,N);
    return 0;
}
