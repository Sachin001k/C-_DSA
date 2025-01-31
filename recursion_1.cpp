#include<iostream>
#include<vector>
using namespace std;

int gcd(int a,int b){
    //base case 
    if(a==0) return b;
    if(b==0) return a;

    //recursive relation
    if(a>b){
        return gcd(a-b,b);
    }
    else{
        return gcd(a,b-a);
    }

    //return a;
}
void reverse(vector<int> arr,int i,int j){
    if(i>j) return;
    cout<<arr[i]<<" ";

    swap(arr[i],arr[j]);
    i++,j--;
    reverse(arr,i,j);
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<"GCD of two number is :"<<gcd(n,m); 
    cout<<endl;
    cout<<endl; 
    vector<int> arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    
    reverse(arr,n,m);  


}