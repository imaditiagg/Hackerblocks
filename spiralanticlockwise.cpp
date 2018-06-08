#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
	int M,N;
	cin>>M>>N;

	for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
        cin>>a[i][j];


    int startRow,endRow,startCol,endCol;
	startRow = startCol = 0;
	endRow = M-1;
	endCol = N-1;

    while(startRow<=endRow && startCol<=endCol)
    {

    //start column
    for(int i=startRow;i<=endRow;i++)
        cout<<a[i][startCol]<<","<<" ";
        startCol++;
    //endrow

        for(int i=startCol;i<=endCol;i++)
        cout<<a[endRow][i]<<","<<" ";
        endRow--;
    //endcolumn
        //if(startCol<=endCol)
       // {


        for(int i=endRow;i>=startRow;i--)
        cout<<a[i][endCol]<<","<<" ";
        endCol--;
       // }

      //startrow
       // if(startRow<=endRow)
       // {


        for(int i=endCol;i>=startCol;i--)
            cout<<a[startRow][i]<<","<<" ";
        startRow++;
       // }
    }

    cout<<"END";
    return 0;
}
