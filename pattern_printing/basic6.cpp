#include<iostream>
using namespace std ;
int main (){

//code (B)

int n = 0;

cout<<"enter a number : ";
cin>>n;

for(int row = 1 ; row <= n; row ++){

    int space = n - row;
    
    for(int col = 1 ;col <= space ;col++){
        cout<<"  ";
    }
    for(int col = 1 ; col <= row; col ++){
        cout<<col<<" ";
    }
    for(int col = row-1;col >= 1 ;col-- ){
        cout<<col<<" ";
    }
    cout<<endl;
}

//code (C)

cout<<endl;

for(int row = 1 ; row<= n ; row ++){

    int space = row - 1;
    int star = n*2 - row - space;

    for(int col = 1; col <= space ; col ++){
        cout<<"  ";
    }
    for(int col = 1 ; col <= star ; col++){
        cout<<"* ";
    }
    cout<<endl;
}
    
//code (D)

cout<<endl;

    for(int row = n ; row >= 1 ; row--){
        
        int star = 2 * row ; 
        int space = 2*n - star ; 

        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        for(int col = 1 ; col <= space ; col ++){
            cout<<"  ";
        }
        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = 1; row <= n ; row++){

        int star = 2*row ; 
        int space = 2*n - star ;

        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        for(int col = 1 ; col <= space ; col ++){
            cout<<"  ";
        }
        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        cout<<endl;
    }

//code (E)

cout<<endl;

    for(int row = 1 ; row <= n-1 ; row ++){

        int star = 2*row;
        int space = 2*n-1 - star ;

        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        for(int col = 1 ; col <= space ; col ++){
            cout<<"  ";
        }
        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int col = 1 ; col <= n*2 - 1; col ++){
        cout<<"* ";
    }

    cout<<endl;

    for(int row = n-1 ; row >= 1 ; row --){
        
        int star = 2*row ; 
        int space = 2*n-1 - star ;

        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        for(int col = 1 ; col <= space ; col ++){
            cout<<"  ";
        }
        for(int col = 1 ; col <= row ; col ++){
            cout<<"* ";
        }
        cout<<endl;
    }

//code (F)

cout<<endl;

    for(int row = 1 ; row <= n ; row ++){

        int star = row ; 
        int space = n-row ; 

        for(int col = 1; col <= space ; col ++){
            cout<<" ";
        }
        for(int col = 1 ; col <= star ; col ++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = n ; row >= 1; row--){

        int star = row ;
        int space = n - row ; 
        for(int col = 1; col <= space ; col ++){
            cout<<" ";
        }
        for(int col = 1 ; col <= star ; col ++){
            cout<<"* ";
        }
        cout<<endl;

    }

}