#include<iostream>
#include<queue>
#include<string>
using namespace std;
static int count=0;

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
node* buildTree(node *root){
	int data;
	string value="true";
	if(count>0)
    cin>>value;

    count++;
    if(value=="true")
    {
        cin>>data;
		root = new node(data);
		root->left = buildTree(root->left);
		root->right = buildTree(root->right);
		return root;
	}
	else
    {
		return NULL;
	}
}


void levelOrderPrint(node*root){
	if(root==NULL){
		return;
	}

	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*temp = q.front();
		if(temp == NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			q.pop();
			cout<<temp->data<<" ";


			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}

	}
}

int main()
{

    node *root=NULL;
    root=buildTree(root);
    levelOrderPrint(root);
    return 0;

}
