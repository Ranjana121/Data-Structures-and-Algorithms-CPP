#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int Factorial=1;
    for(int i=1;i<=n;i++){
        Factorial*=i;
        cout<<"Factorial of "<< i << " is "<<Factorial<<endl;
    }
}