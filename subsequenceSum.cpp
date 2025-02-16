#include<bits/stdc++.h>
using namespace std;
//printing sequences whoes sum is equal to sum;
void printSum(int arr[],int n,vector<int>&ds,int index,int sum,int s){
    //base case
    if(index==n){
        //printint the ds array
        if(s==sum){
            for(int i=0;i<ds.size();i++){
                cout<<ds[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //include element
    ds.push_back(arr[index]);
    s += arr[index];
    printSum(arr,n,ds,index+1,sum,s);
    //exclude element
    s -= arr[index];
    ds.pop_back();
    
    printSum(arr,n,ds,index+1,sum,s);


}

int main(){
    int arr[] = {1,2,1};
    int n=3;
    vector<int> ds;
    int sum=2;
    int index=0;

    printSum(arr,n,ds,index,sum,0);
}