#include<iostream>
using namespace std ;
int main(){

    int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

    for(int i = 0 ; i <5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // //printing the matrix like a wave

    // for(int j = 0 ; j < 5 ; j++){
    //     if(j%2==0){
    //         for(int i = 0 ; i < 5 ; i ++){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    //     else{
    //         for(int i = 5-1 ; i >= 0 ; i --){
    //             cout<<arr[i][j]<<" ";
    //         }
    //     }
    // }


    //printing the matrix spiraly

    //we need four thing 1.top , 2. right , 3. bottom, 4. left

    int top = 0 , right = 5-1 , left = 0 , bottom = 5-1 ;

    while(top<=bottom ){
        
        for(int i = top ; i <= right ; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;

        for(int i = top ; i <= bottom ; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        for(int i = right; i >= left; i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;

        for(int i = bottom ; i >= top ; i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }

    return 0 ;

}