#include<iostream>
using namespace std; 

//time complextiy for deletion logn
//time complextiy for insertion logn



//for funding parent/child we use the fourmula 
// parent idx = i 
// then left child = 2 * i-1
// then right child = 2 * i+1

//child idx = i 
// parent idx = (i-1)/2

class MaxHeap{

    int *arr ;
    int size ;
    int total_size ;

    public :

    //heapify function 

    void heapify(int idx){

        int largest = idx ; 
        int left = 2*idx+1;
        int right = 2*idx+2;

        //largest one will have the element which is greater either left or right element 

        if(left < size && arr[left] > arr[largest]){
            largest = left ; 
        }
        if(right < size && arr[right] > arr[largest]){
            largest = right ; 
        }
        
        if(largest != idx){

            swap(arr[idx],arr[largest]) ;
            heapify(largest) ;
            
        }

    }

    //declaring heap 
    MaxHeap(int n){

        arr = new int[n];
        size = 0;
        total_size = n ;
    }

    //insert into the heap
    void insert(int value){

        //check if heap is full 
        if(size == total_size){
            cout<<"heap overflow"<<endl;
            return;
        }

        arr[size] = value;
        int idx = size ;
        size++ ;         

        //compare it with parent

        while(idx > 0 && arr[(idx-1)/2] < arr[idx]){
            swap(arr[idx],arr[(idx-1)/2]);
            idx = (idx-1)/2;
        }

        cout<<arr[idx]<<" is inserted into the heap\n";
    }   

    //printing the heap

    void print(){
        for(int i = 0 ; i < size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return ;
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

    MaxHeap m1(5);

    m1.insert(10);
    m1.insert(9);
    m1.insert(1);
    m1.insert(13);
    m1.insert(3);
    // m1.insert(19);
    m1.print();
    m1.del();
    m1.print();
    m1.del();
    m1.del();
    m1.del();
    m1.del();
    m1.del();
    m1.print();




}