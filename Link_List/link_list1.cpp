#include<iostream>
using namespace std;

class linkListNode{

    public:
    int data;
    linkListNode* next;
    //constructor calling
    linkListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    linkListNode* node1 = new linkListNode(100);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

}