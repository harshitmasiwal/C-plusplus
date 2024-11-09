#include<iostream>
using namespace std;

void increase(int **ptrx){
    (**ptrx)++;
}

int main(){


    int n = 10;
    //using double pointer 
    int *p1 = &n;
    int **p2 = &p1;
    increase(p2);
    cout<<n;


    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//using refrence variable
// void increase_refrence(int &num){
//     num++;
// }

// int main(){

//     int n = 11;
//     increase_refrence(n);
//     cout<<n;

// }