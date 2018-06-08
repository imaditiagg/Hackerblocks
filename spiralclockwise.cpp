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


	while(startRow<=endRow && startCol<=endCol){
		//Start row
		for(int i=startCol;i<=endCol;i++){
			cout<<a[startRow][i]<<","<<" ";
		}
		startRow++;
		//End Col
		for(int i=startRow;i<=endRow;i++){
			cout<<a[i][endCol]<<","<<" ";
		}
		endCol--;

		//Bottom Row if ER > SR
		if(endRow>=startRow){
			for(int i=endCol;i>=startCol;i--){
				cout<<a[endRow][i]<<","<<" ";
			}
			endRow--;

		}

		//Start Col
		if(startCol<=endCol){
			for(int i=endRow;i>=startRow;i--){
				cout<<a[i][startCol]<<","<<" ";
			}
			startCol++;
		}
	}
	cout<<"END";
    return 0;
}
