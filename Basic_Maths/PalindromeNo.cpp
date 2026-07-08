#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse=0;
    int original=n;
    int lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10;
        reverse+=lastdigit;
        n=n/10;
    }
    if(original==reverse){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
}