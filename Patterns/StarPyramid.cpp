#include <iostream>
using namespace std;   
int main(){
    int n;
    cout << "Enter the number of lines ";
    cin >> n;
    int nst=1;  // number of stars
    int nsp=n-1;    // number of spaces
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout <<" ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout <<"*";
        }
        nst+=2;
        cout << endl;
    }
}