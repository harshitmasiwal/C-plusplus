#include<iostream>
using namespace std;
int main(){

    int len = 6;
    int arr[6] = {1,2,3,4,5,6};
    int div = 2;

    for (int i =0 ;i< len-div+1 ;i++){

        for(int j = i ; j < div+i ; j++){
            cout << arr[j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}