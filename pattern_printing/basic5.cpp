#include<iostream>
using namespace std;
int main(){


    int n = 0;
    cout<<"enter a number : ";
    cin>>n;

//code 1 

    for(int row = 1 ; row <= n ; row ++){

        for(int col = 1 ; col <=n-row ; col++){

            cout<<"  ";

        }
        for(int col = 1 ; col <= row ; col++){

            cout<<"* ";

        }
        cout<<endl;
    }

//code 2 

    cout<<endl;

    for(int row = 1 ; row <= n ; row ++){

        for(int col = 1; col <= n-row ; col++){
            cout<<"  ";
        }
        for(int col = 1 ; col <=row;col ++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
//code 3 

    cout<<endl;

    for(int row = 1 ; row<= n ; row ++){

        for(int col = 1 ; col<= n - row ; col ++){
            cout<<"  ";
        }
        for(int col = 1 ; col <=row ; col ++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
//code 4

    cout<<endl;

    for(int row = 1; row<= n ; row ++){

        for(int col = 1; col <= n-row;col ++){
            cout<<"  ";
        }
        for(char name = 'a' ; name <= 'a'+row-1;name ++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
//code 5

    cout<<endl;

    for(int row = 1; row<= n ; row++){
        
        for(int col = 1 ; col <= n - row; col++){
            cout<<"  ";
        }
        for(int col = row ; col >=1 ; col --){
            cout<<col<<" ";
        }
        cout<<endl;
    }
//code 6

    cout<<endl;

    for(int row = 1 ; row <= n ;row++){

        int star = row*2-1;
        int space = n-row;

        for(int col =1 ;col <=space;col++){
            cout<<"  ";
        }
        for(int col = 1 ; col <= star ; col ++){
            cout<<"* ";
        }
        for(int col =1 ; col<= space ; col++){
            cout<<"  ";
        }
        
        cout<<endl;
    }
}