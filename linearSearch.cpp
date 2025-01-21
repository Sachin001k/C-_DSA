#include<iostream>
using namespace std;

bool linearSearch(int *arr,int n,int key){
    //base case
    if(n==0) return false;

    //solve 1 case 
    if(arr[0]==key){
        return true;
    }
    else{
        return linearSearch(arr+1,n-1,key);
    }
}
int main(){
    int arr[6]={2,5,3,7,2,8};
    int key = 5;
    bool ans= linearSearch(arr,6,key);
    if(ans){
        cout<<"key is present in array: "<<endl;
    }
    else{
        cout<<"key is not present is array: "<<endl;
    }


}