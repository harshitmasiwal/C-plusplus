#include<iostream>
using namespace std ;

class MinHeap{

    int *arr ;
    int size ;
    int total_size ;

    public:

    void heapify(int idx){

        int smallest = idx ;
        int left = 2*idx+1 ;
        int right = 2*idx+2 ;

        //smallest one will have the element which is smaller either left or right element 

        if(left < size && arr[left] < arr[smallest]){
            smallest = left ;
        }
        if(right < size && arr[right] < arr[smallest]){
            smallest = right ;
        }
        
        if(smallest != idx){

            swap(arr[idx],arr[smallest]);
            heapify(smallest) ;

        }

    }

    MinHeap(int n){

        arr = new int[n];
        size = 0 ;
        total_size = n ;
    }

    //insertion in heap 
    void insert(int value){

        if(size == total_size){
            cout<<"heap overflow\n";
            return ;
        }

        arr[size] = value ; 
        int idx = size ;
        size++;

        while(idx > 0 && arr[(idx-1)/2] > arr[idx]){
            swap(arr[idx],arr[(idx-1)/2]);
            idx = (idx-1)/2;
        }

        cout<<arr[idx]<<" is inserted into the heap\n";

    }

    //display 
    void print(){

        for(int i = 0 ; i < size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    //deleting the element from heap
    //(the element only at top is deleted once in heap)
    void del(){

        if(size == 0){
            cout<<"heap underflow\n" ;
            return ;
        }

        cout<<arr[0]<<" is deleted from the heap\n";
        arr[0] = arr[size-1];
        size--;

        if(size == 0 ){
            return ;
        }

        heapify(0); 

    }


};

int main(){


    MinHeap m1(6) ;
    m1.insert(8) ;
    m1.insert(3) ;
    m1.insert(82) ;
    m1.insert(2) ;
    m1.insert(1) ;
    m1.insert(43) ;
    m1.print();

    m1.del();
    m1.del();
  

    m1.print();

}