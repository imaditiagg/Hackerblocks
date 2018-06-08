#include<iostream>
#include<queue>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};


node* levelOrderBuild()
{
	int d;
	//cout<<"Enter the root data";
	cin>>d;
	node*root = new node(d);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node*temp = q.front();
		q.pop();

		//cout<<"Enter children of "<<temp->data<<endl;
		int d1,d2;
		cin>>d1>>d2;

		if(d1!=-1){
			temp->left = new node(d1);
			q.push(temp->left);
		}
		if(d2!=-1){
			temp->right = new node(d2);
			q.push(temp->right);
		}
	}
	return root;
}
istream& operator>>(istream&is, node*&root){
	root = levelOrderBuild();
	return is;
}

void print_leaf(node *root)
{
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    else
        {

        print_leaf(root->left);
        print_leaf(root->right);
    }


}



int main()
{
    node *root;
    cin>>root;
    print_leaf(root);
}
