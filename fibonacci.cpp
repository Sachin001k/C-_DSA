#include<iostream>
#include<vector>
using namespace std;

int fibo(int n){
    //cout<<"nth fibo is before: "<<n<<endl;
    //cout<<endl<<endl;
    //base case
    if(n==0) return 1;
    if(n==1) return 1;

    //rr 
    int smallP = fibo(n-1);
    int bigP = smallP+fibo(n-2);
    //cout<<"nth fibo is after: "<<n<<endl;

    return bigP;
}

void print(int *res,int n){
    //base case
    if(n==0) return;

    //processesing
    print(res+1,n-1);
    cout<<res[0]<<" ";
}
int main(){
    int n;
    cin>>n;

    int ans = fibo(n);
    cout<<"nth fibo n0. is: "<<ans<<endl;
    int res[1000] = {0};
    int i=0;
    while(i!=fibo(n)){
        cout<<"fibo is: "<<fibo(i)<<endl;
        res[i]=fibo(i);
        i++;
    }
    
    print(res,5);
}