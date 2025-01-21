#include<iostream>
#include<vector>
using namespace std;
  int pivot(vector<int> &arr){
      int s=0;
        int e=arr.size()-1;
        int mid = s+(e-s)/2;
        
        if(arr[mid]<arr[e] && arr[mid]>arr[s]) return 0;
        while(s<e){
            if(arr[0]>arr[mid]){
                e = mid;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return s;
  }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"index of pivot is: "<<pivot(arr)<<endl;


}