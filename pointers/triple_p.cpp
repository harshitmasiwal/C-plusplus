#include<iostream>
using namespace std ;
int main(){

    int num = 10 ; 
    int *p1 = &num; //single pointer
    int **p2 = &p1; //double pointer
    int ***p3 = &p2;   //triple pointer
    int ****p4 = &p3;  //quad pointer

    ****p4 = ***p3+10;
    cout<<num;
 

    return 0;
}