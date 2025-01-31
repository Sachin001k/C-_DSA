#include<iostream>
using namespace std;
void printName(int n){
    //base case
    if(n==0) return;
    cout<<"Sach "<<endl;

    printName(n-1);
}
 
void printNumb(int n){
    //ase case
    if(n==0) return;

    printNumb(n-1);
    cout<<n<<" ";
}

void printNum(int i,int n){
    //base case
    if(i==0) return;

    cout<<i<<" ";
    printNum(i-1,n);
}

int main(){
    int n=4;
    printName(n);
    cout<<endl;
    printNumb(n);
    cout<<endl;
    printNum(n,n);

}