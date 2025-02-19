#include<iostream>
using namespace std ; 

//heap is implemented using array data structure
// nlog(n) time complexity for creating heap
//two types of heap MIN_HEAP & MAX_HEAP

//min heap -> The smallest element (10) is at the root. Each parent node is smaller than its children.
//         10
//        /  \         // 
//       20   15
//      /  \  /  \     //
//    30   25 40  50

//max heap  -> The largest element (50) is at the root. Each parent node is greater than its children.
    //      50
    //     /   \        //
    //   30     40
    //   / \    / \     //
    //  10  25 15  20

//for funding parent/child we use the fourmula 
// parent idx = i 
// then left child = 2 * i-1
// then right child = 2 * i+1

//child idx = i 
// parent idx = (i-1)/2
 
class heap{

    // array 
    // size (total elements in the heap)
    // total_size (total size of array)

};

int main(){


}