#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    //base case
    if(n==0||n==1) return true;

    //solve 1 case 
    if(arr[0]>arr[1]) return false;

    else{
        bool res = isSorted(arr+1,n-1);
        return res;
    }

    
}
int getSum(int arr[],int n){
    //base case
    if(n==0) return 0;
    if(n==1) return arr[0];

    //processesing 
    
    int sum = arr[0]+arr[1];
    int ans=getSum(arr+2,n-2)+sum;
    

    return ans;
}
int getSum2(int *arr,int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1) return arr[0];

    //processesing 
    int remainingpart = getSum2(arr+1,n-1);
    int sum = arr[0]+remainingpart;
    return sum;

}

int main(){
    int arr[5] = {0,0,0,2,0};

    int sum = getSum2(arr,5);
    cout<<"sum of 5 numbers is: "<<sum<<endl;

}