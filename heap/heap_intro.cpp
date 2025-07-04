#include<iostream>

using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    //constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    //insertion 
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;
        
        //parent finding
        while(index>1){
            int parentIndex = index/2;
    //max heap property
            if(arr[parentIndex] < arr[index]){
                swap(arr[parentIndex], arr[index]);
                index = parentIndex;
            }
            else{
                return;
            }

        }

       
    }

    //deletion from heap
    void deleteFromHeap(){
        //
        if(size == 0){
            cout<<"Nothing to delete: "<<endl;
            return;
        }
        arr[1] = arr[size]; //swaping root node with last node
        size--; //decreasing the size

        int i=1;
        while(i<=size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

    //printing the results
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left<size && arr[largest] <arr[left]){
        //max heap
        largest = left;
    }
    if(right < size && arr[largest] < arr[right]){
        largest = right;
    }

    //checking if there is any change
    if(largest != i){
        swap(arr[i],arr[largest]);
        //check remaining nodes
        heapify(arr,size, largest);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54,53,52, 55, 50};
    int n = 5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    cout<<"printing array after heapify"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}