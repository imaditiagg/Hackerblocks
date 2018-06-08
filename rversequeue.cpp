
using namespace std;
#include<iostream>
#include<queue>
void print(queue<int> q){

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<"END";
}
void rev(queue<int> &q)
{
    if(q.empty())
        return;
    int e=q.front();
    q.pop();
    rev(q);
    q.push(e);
}

int main()
{
    queue<int> q;
    int N,num;
    cin>>N;

    for(int i=0;i<N;i++)
    {
        cin>>num;
        q.push(num);
        num=0;
    }

    rev(q);
    print(q);
    return 0;

}

