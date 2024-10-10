#include<iostream>


using namespace std; 
int main(){

    int book[4] = {12,34,67,90};
    
    int no_of_std = 2; 
    int no_of_book = 4;

    int start = 0 , end = 0 , mid , ans ;
    
    for(int i = 0; i < no_of_book ; i++){
        start = max(start,book[i]);
        end = end + book[i];
    }


    while(start <= end){

        mid = start + (end-start)/2;

        int pages = 0 , count = 1 ;
        for(int i = 0 ; i < no_of_book ; i++){
            pages = pages + book[i] ;
            if(pages > mid) {
                count++ ;
                pages = book[i];
            }
        }

        if(count <= no_of_std){
            ans = mid ;
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }


    cout<<ans;


    return 0;
}