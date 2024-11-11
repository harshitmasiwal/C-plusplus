#include<iostream>
using namespace std;
// int main(){

//     //making an 2d array using the pointer 
//     int rows;
//     int cols;

//     cout<<"enter no of rows : ";
//     cin>>rows;
//     cout<<"enter no of cols : ";
//     cin>>cols;



//     int **ptr = new int*[rows];         ///
//     for(int i = 0 ; i< rows ; i++){     /// these lines will create the 2d array
//         ptr[i] = new int[cols];         ///
//     }

//     //inserting value in this 

//     cout<<"enter the elements : ";

//     for(int i = 0 ; i<rows ; i++){
//         for(int j = 0 ; j < cols ; j++){
//             cin>>ptr[i][j];
//         }
//     }

//     //displaying value

//     cout<<"the arrray is : ";

//       for(int i = 0 ; i<rows ; i++){
//         for(int j = 0 ; j < cols ; j++){
//             cout<<ptr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //for deleting we have to clear using 

//     for(int i = 0 ; i < rows ; i++){
//         delete [] ptr[i];
//     }

//     delete [] ptr;

//     //  cout<<"the arrray is : ";

//     //   for(int i = 0 ; i<rows ; i++){
//     //     for(int j = 0 ; j < cols ; j++){
//     //         cout<<ptr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     //the above one will result the garbage value

//     return 0;
// }    

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    //creating an 3d array 

    int l,b,h;
    cout<<"enter the l , b, h :";
    cin>>l>>b>>h;

    int ***arr = new int**[l];

    for(int i = 0 ; i < l ; i++){
        arr[i] = new int*[b];
        
        for(int j = 0 ; j < b ;j++){
            arr[i][j] = new int[h];
        }
        
    }

    cout<<"enter the elements : ";

    for(int i = 0 ; i < l;i++){
        for(int j = 0 ; j < b; j++){
            for(int k = 0 ; k<h ; k++){
                cin>>arr[i][j][k];
            }
        }
    }


     for(int i = 0 ; i < l;i++){
       
        for(int j = 0 ; j < b; j++){
            for(int k = 0 ; k<h ; k++){
                cout<<arr[i][j][k]<<" ";
            }
             cout<<endl;
        }
         cout<<endl;
    }

    

    return 0;
}