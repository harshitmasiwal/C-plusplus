// binary search in 2d array

#include <iostream>
using namespace std;
int main()
{

    int rows = 3, col = 4;
    int target = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for(int i = 0 ; i <3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // for bianry search the matrix should be arranged in the sorted order

    // // 1. meathod with the time complexity of O(N)log(N)

    // for (int i = 0; i < rows; i++)
    // {

    //     if (arr[i][0] <= target && arr[i][col - 1] >= target)
    //     {

    //         // now yhaa lagao binary seaarch

    //         int start = 0, end = col - 1, mid = 0;

    //         while (start <= end)
    //         {

    //             mid = start + (end - start) / 2;

    //             if (arr[i][mid] == target)
    //             {
    //                 cout << "element found at index :" << i << "," << mid;
    //                 return 0;
    //             }
    //             else if (arr[i][mid] > target)
    //             {
    //                 end = mid - 1;
    //             }
    //             else
    //             {
    //                 start = mid + 1;
    //             }
    //         }
    //     }
    // }



    // 2. good meathod with time complexiy of O(N)

    //calculate total no of elements

    int elements = rows*col;
    int row_idx = 0 , col_idx = 0 ;

    for(int i = 0 ; i < elements ; i++){
        row_idx = i / col ; 
        col_idx = i % col ;

        if(arr[row_idx][col_idx] == target) {
            cout<<"element found at index : "<<row_idx<<","<<col_idx ;
            return 0 ;
        }

    }

    cout<<"element not found in matrix" ;



    return 0;
}