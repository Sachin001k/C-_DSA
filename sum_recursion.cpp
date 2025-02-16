#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0) return;

    print(n-1);
    cout<<n<<" ";
}
void fn(int n,int sum){
    if(n==0){
        //print(sum);
        cout<<sum<<" ";
        return;
    }
    fn(n-1,sum+n);
}
int main(){
    int n;
    cin>>n;
    int sum = 0;
    fn(n,sum);
    //print(sum);

}