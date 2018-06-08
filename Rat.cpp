#include<iostream>
using namespace std;

bool solveRatInMaze(char maze[][10],int soln[][10],int i,int j,int n,int m){
	//Base Case
	if(i==n&&j==m){

        soln[i][j] = 1;

		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cout<<soln[i][j]<<" "; //print the sol matrix
			}
			cout<<endl;
		}
		return true;
	}
	//Rec Case
	//Assume path exists through cell i,j
	soln[i][j] = 1;


	if(i<n && maze[i+1][j]!='X'){
		bool pathExists = solveRatInMaze(maze,soln,i+1,j,n,m);
		if(pathExists){
			return true;
		}
}
if(j<m && maze[i][j+1]!='X'){
			bool pathExists = solveRatInMaze(maze,soln,i,j+1,n,m);
			if(pathExists){
				return true;
			}
	}
	//Path doesnt exist through current cell
	soln[i][j] = 0;
	return false;
}


int main(){
    int n,m;
    cin>>n>>m;
	char maze[10][10];
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin>>maze[i][j];
    }

		int soln[10][10] = {0};

	if(solveRatInMaze(maze,soln,1,1,n,m)==false){
		cout<<"No path exists!";
	}



	return 0;
}
