// #include <iostream>
// #include <vector>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *next;

//     node(int val)
//     {
//         this->data = val;
//         this->next = NULL;
//     }
// };

// int main()
// {

//     node *head = NULL;

//     for (int i = 1; i < 10; i++)
//     {
//         if (head == NULL)
//         {
//             head = new node(i);
//         }
//         else
//         {
//             node *temp = new node(i);
//             temp->next = head;
//             head = temp;
//         }
//     }


//     cout<<"before rotating "<<endl;

//     //printing 
//     node * display = head ;
//     if(display == NULL){
//         cout<<"underflow";
//     }
//     while(display != NULL){
//         cout<<display->data<<" ";
//         display = display->next;
//     }

//     cout<<"after rotating "<<endl;

//     vector<int>arr;
//     node * temp = head;
//     while(temp){
//         arr.push_back(temp->data);
//         temp = temp->next;
        
//     }

//     for (int k = 0 ; k < sizeof(arr)-1 ; k++){
//         cout<<arr[k]<<" ";
//     }

//     int rotate = 2;
//     rotate = rotate%sizeof(arr);
//     rotate = sizeof(arr) - rotate;

//     int i = 0 ;
//     temp = head;
//     while(temp){


//         if(rotate){
//             temp->data = arr[sizeof(arr)-rotate-1];
//             rotate--;
//         }
//         else{
//             temp->data = arr[i] ;
//             i++;
//         }

//         temp = temp->next;

//     }
    

//     //printing 
//     display = head ;
//     if(display == NULL){
//         cout<<"underflow";
//     }
//     while(display != NULL){
//         cout<<display->data<<" ";
//         display = display->next;
//     }



// }
