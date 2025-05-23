#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    //constructor
    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    root = new node(data);
    //check for null
    if(data == -1){
        return NULL;
    }
    //1st insert in left of the tree
    cout<<"Enter data in left node: "<<data<<endl;
    root->left = buildTree(root->left);

    //after that insert in root->right
    cout<<"enter data in right node: "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrdertraversal(node* root){
    //store in queue
    queue<node*> q;
    q.push(root);
    //use seperator for completing the level
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            //left is not null
                q.push(temp->left);
            }
            if(temp->right){
            //right is not null
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node* root){
    if(root == NULL){
        return;
    }
    //recursive call
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }
    //recursive call
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL){
        return;
    }

    //recusive call
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevel(node* &root){
    queue<node*>q;
    int data;
    cout<<"Enter data for root: "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        //enter the data to the left of root node
        int leftData;
        cout<<"enter left node data: "<<temp->data<<endl;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        int rightData;
        cout<<"enter the right node data: "<<temp->data<<endl;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){
    node* root = NULL;
    buildFromLevel(root);
    cout<<endl;
    levelOrdertraversal(root);
    /*
    
    root = buildTree(root);
    cout<<"printing data "<<root->data<<" ";
    cout<<endl;
    cout<<"level order traversal is: "<<endl;
    levelOrdertraversal(root);
    cout<<endl;
    cout<<"inorder traversal is: "<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"preOrder is: "<<endl;
    preOrder(root);

    cout<<endl;
    cout<<"postOrder traversal is: "<<endl;
    postOrder(root);

    */

}