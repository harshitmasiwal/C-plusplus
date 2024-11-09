#include<iostream>
using namespace std;
int main(){

// //reversing an string
//     string name = "harshit" ;
//     int len = name.size();
//     int start = 0 , end = len-1;
//     while(start<end){
//         swap(name[end],name[start]);
//         start++ , end--;
//     }

//     cout<<name;

// }

// //calcuclating the string size without function 

// string name ="naman is \"good\" boy";
// int i = 0 , len = 0;
// while(name[i] != '\0'){
//     len ++ , i ++;
// }
// cout<<len;

// }

//palindrom finder for string

string name = "NITIN";
int start = 0 , end = name.size()-1 ;
while(start<end){

    if(name[start] == name[end]){
        start++ , end-- ;
    }
    else {
        cout<<"not a palindrome";
        return 0;
    }
}
cout<<name<<" it is a palindrome" ; 

}