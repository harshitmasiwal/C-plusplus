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