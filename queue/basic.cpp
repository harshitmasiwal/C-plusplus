#include<iostream>
using namespace std;

class queue{

    int *arr ;
    int size, front , rear ;

    public:
    queue(int n){
        arr = new int[n];
        size = n ;
        front = -1;
        rear = -1; 
    }

    //empty
    bool IsEmpty(){
        return front ==-1 ; //comparing the front
    }
    //full
    bool IsFull(){
        return rear == size-1;
    }

    //pushing into the queue

    void push (int x){

        //empty
        if(IsEmpty()){
            front = 0 ; 
            rear = 0 ; 
            arr[front] = x;
            cout<<"pushed "<<x<<" into the queue \n ";
        }
        //full 
        else if(IsFull()){
            cout<<"Queue Overflow ! \n";
        }
        //normal 
        else{
            rear = rear + 1;
            arr[rear] = x;
            cout<<"pushed "<<x<<" into the queue \n ";
        }
    }

    void pop(){

        //empty
        if(IsEmpty()){
            cout<<"Queue underflow ! \n";
        }
        //have element 
        else{
            
            if(front==rear){  //it means the queue has only one element and when we pop the queue is empty
                cout<<"poped "<<arr[front]<<" from the queue \n ";
                front = -1 ;
                rear = -1;
                cout<<"Now the queue is empty .\n ";
            }
            else{
                cout<<"poped "<<arr[front]<<" from the queue \n ";
                front = front+1;
            }

        }

    }


    //starting element 
    int start(){

        if(IsEmpty()){
            cout<<"Queue is empty . \n";
        }
        else{
            return arr[front];
        }
    }
};

int main(){

    queue q(5);
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(10);
    q.pop();
    q.pop();
    cout<<q.IsEmpty()<<endl;
    cout<<q.IsFull()<<endl;
    cout<<q.start()<<endl;
    

}