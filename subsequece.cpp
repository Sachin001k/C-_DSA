#include<iostream>
#include<vector>
using namespace std;

void printSequence(int arr[],int index,vector<int> &ds,int n){
    //base case
    if(index>=n){
        //printing the array ds
        
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<" ";
        }
        cout<<endl;
        
        return;
    }
    
    //include and exclude game;
    ds.push_back(arr[index]);
    printSequence(arr,index+1,ds,n);
    ds.pop_back();
    printSequence(arr,index+1,ds,n);
    
}

int main(){
    int n = 3;
    
    int arr[] = {1,2,3};
    int index = 0;
    vector<int> ds;
    printSequence(arr,index,ds,n);
}