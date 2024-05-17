#include<iostream>
using namespace std ;
int main () {
//converting decimal to octal ; 
    int num ; 
    cout<<"enter the decimal number : ";
    cin>>num ; 

    int rem , ans = 0 , multiply = 1 ;

    while(num > 0 ){

        rem = num % 8 ;
        num = num / 8 ;

        ans = rem * multiply + ans ; 
        multiply = 10 * multiply ;
    }

    cout<<"the octal number is : "<<ans ;

    cout<<endl;
    cout<<endl; 

    //converting binary to octal 
    // binary -> decimal -> octal 
    int bi ;
    
    cout<<"enter binary number : ";
    cin>>bi ;
    
    // covert to decimal 

    ans = 0 , rem = 0 , multiply = 1 ;

    while(bi > 0 ){

        rem = bi % 10 ; 
        bi = bi / 10 ;

        ans = rem * multiply + ans ;
        multiply = 2 * multiply ;

    }

    //now the "ans" holds the decimal number 

    int dec = ans ;

    ans = 0 , rem = 0 , multiply = 1 ;

    while(dec > 0 ){

        rem  = dec % 8 ;
        dec = dec / 10 ; 

        ans = rem * multiply + ans ;
        multiply = 8 * multiply ; 

    }

    cout<<"the octal number is : "<<ans;     
    

}
