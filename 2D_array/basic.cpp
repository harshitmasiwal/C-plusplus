#include<iostream>
#include<vector>
#include<limits.H>
using namespace std ;



int main(){
    

    //declaration on 2d array

    int arr[3][3] ={1,2,3,4,5,6,7,8,9};

    //using the vector
    int row = 3 , col = 4 ;
    vector<vector<int>>matrix(row,vector<int>(col,1)); 

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j< col ; j++){
            cout<<matrix[i][j]<<" " ;
        }
        cout<<endl;
    }

    cout<<endl;



    int matrix2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


// //additon of two matrix
//     int result[3][4] ;

//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0 ; j < 4 ; j++){
//             result[i][j] = matrix[i][j] + matrix2[i][j]; 
//         }
//     }

//      for(int i = 0 ; i < row ; i++){
//         for(int j = 0 ; j< col ; j++){
//             cout<<result[i][j]<<" " ;
//         }
//         cout<<endl;
//     }


//row index with max sum 

    // int max = INT_MIN , idx = -1; 

    // for(int i = 0 ; i < 3; i++){
    //     int total = 0 ;
    //     for(int j = 0 ; j < 4 ; j++){
    //         total = total + matrix2[i][j];
    //     }
    //     if(total > max ){
    //         max = total ;
    //         idx = i;
    //     }
    // }

    // cout<<idx; 



// //DIAGONAL ELEMENT SUM 

//     int arr2[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,15,14,15,16};

//     for(int i = 0 ; i < 4 ; i++){
//         for(int j = 0 ; j< 4 ; j++){
//             cout<<arr2[i][j]<<" " ;
//         }
//         cout<<endl;
//     }

//     cout<<endl;

//     //for '\' this diagonal
//     int i = 0 , sum1 = 0 ;
//      while(i < 4){
//         sum1 = arr2[i][i] + sum1 ;
//         i++;
//      } 

//     cout<<sum1 ;

//     cout<<endl;

//     //for '/' this diagonal
//     i = 0 ;
//     int j = 4-1 , sum2 = 0; 
//     while(i < 4){
//         sum2 = sum2 + arr2[i][j] ;
//         i++ ;
//         j-- ;
//     }
//     cout<<sum2;


//reverse each row of matrix


     int matrix3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j< 4 ; j++){
                cout<<matrix3[i][j]<<" " ;
            }
            cout<<endl;
        }

    //reverse the row 

    
    for(int i = 0 ; i < 3 ; i++){
           int start = 0 , end = 4-1; 
           while(start<end){

                swap(matrix3[i][start],matrix3[i][end]);
                start++ , end -- ;
           }
        }    
    cout<<endl;

    for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j< 4 ; j++){
                cout<<matrix3[i][j]<<" " ;
            }
            cout<<endl;
        }

    return 0 ;
}