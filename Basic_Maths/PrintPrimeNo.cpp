#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Range: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        int isPrime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
}