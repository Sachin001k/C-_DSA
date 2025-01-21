#include<iostream>
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
int main(){
    int n,m;
    cin>>n>>m;
    cout<<"GCD of two number is :"<<gcd(n,m);    


}