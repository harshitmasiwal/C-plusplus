// #include<iostream>

// using namespace std;
// int main (){

//     int arr[100] = {2,5,6,9} ;

//     int size = 4 ;
//     int last = arr[size-1];

//     for(int i = 1 ; i <last ;i++ ){

//         int start = 0 , end = size - 1 ;
//         int mid ;
//         bool flag = false;
//         //binary search to check i is present in the array or not
//         while(start <= end ){

//             mid = start + (end - start)/2 ;

//             if(i == arr[mid]){
//                 flag = 1 ;
//                 break;
//             }
//             else if(i>arr[mid]){
//                start = mid+1;
//             }
//             else {
//                 end = mid -1;
//             }
//         }

//         //check wether flag is false
//         //if yes then insert it
//         if(flag) {

//             for(int j = size - 1 ; j > start ; j++){
//                 arr[j] = arr[j-1];
//             }
//             arr[start] = i;
//             size++;
//         }

//     }

//     for(int i = 0 ; i < size ;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0 ;

// }

// #include<iostream>
// using namespace std ;
// int main (){
//     bool flag = false ;

//     if(!flag){
//         cout<<"hello ";
//     }
// }

// int main(){

//     int n = 5 ;

//     for(int row = 1 ; row <= 5 ;row++){

//         int space = n-row ;
//         int star = row*2-1;

//         for(int col = 1 ; col <= space;col++){
//             cout<<"  ";
//         }
//         for(int col = 1; col<=star;col++){
//             cout<<"* ";
//         }
//         for(int col = 1 ; col <= space;col++){
//             cout<<"  ";
//         }
//     cout<<endl;

//     }
// }
// int main(){

//     int n , pow2 = 2;
//     cout << "enter : ";
//     cin >>n ;

//         while(n > pow2){
//             pow2 = pow2 * 2 ;
//             if( n == pow2 )
//             cout<<"yes";
//         }

// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

//     int k = 5;

//     vector<int> a = {2, 3, 6, 7, 9};
//     vector<int> b = {1, 4, 8, 10};
//     int ans = 0;
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     while (count != k)
//     {

//         if (i < a.size() && (j >= b.size() || a[i] <= b[j]))
//         {
//             ans = a[i];
//             i++;
//         }
//         else if (j < b.size())
//         {
//             ans = b[j];
//             j++;
//         }
//         count++;
//     }

//     cout << ans;
// }


#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;

    node(int value){
        this->data = value;
        this->next = NULL;
    }
};

int main(){

    int arr1[3] = {1,6,7};
    int arr2[3] = {1,8,9};

    node *head1 = NULL;
    node *tail1 = NULL;
    node *head2 = NULL;
    node *tail2 = NULL;

    for(int i = 0 ; i < 3 ; i++){
        if(head1 == NULL){
            head1 = new node(arr1[i]);
            tail1 = head1;
        }
        else{
        
            node * temp = new node(arr1[i]);
            tail1->next = temp ;
            tail1 = temp;

        }
    }

    for(int i = 0 ; i < 3 ; i++){
        if(head2 == NULL){
            head2 = new node(arr2[i]);
            tail2 = head2;
        }
        else{
        
            node * temp = new node(arr2[i]);
            tail2->next = temp ;
            tail2 = temp;

        }
    }


    //reversing head1 

//     node * curr = head1;
//     node * prev = NULL;
//     node * front = NULL;
//     while(curr){

//         front = curr->next;
//         curr->next = prev;
//         prev = curr ;
//         curr = front;

//     }

//     head1 = prev;


//     //reversing head 2

//     curr = head2;
//     prev = NULL;
//     front = NULL;

//     while(curr){

//         front = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = front;

//     }

//     head2 = prev;

//     //the main code 


//     node *headans = NULL;
//     node *tailans = NULL;
//     int ans = 0;
//     int rem = 0 ;
//     int carry = 0 ;
//     int i = 0;
//     node *temp1 = head1;
//     node *temp2 = head2;
//     while(i<3){
//         ans = temp1->data + temp2->data + carry;
//         rem = ans%10;
//         carry = ans/10;
//         temp1 = temp1->next;
//         temp2 = temp2->next;

//         if(headans == NULL){
//             headans = new node(rem);
//             tailans = headans;
//         }
//         else{
        
//             node * temp = new node(rem);
//             tailans->next = temp ;
//             tailans = temp; 
//         }

//         i++;
        
//     }

//     if(carry){
//             node * temp = new node(carry);
//             tailans->next = temp ;
//             tailans = temp; 
//         }

//     //displaying

//     node * display = head1;

//     while(display){
//         cout<<display->data<<" ";
//         display = display->next;
//     }

//     cout<<endl;

//      display = head2;

//     while(display){
//         cout<<display->data<<" ";
//         display = display->next;
//     }

//     cout<<endl;

//     display = headans;

//     while(display){
//         cout<<display->data<<" ";
//         display = display->next;
//     }


// }