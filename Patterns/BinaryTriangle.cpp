#include <iostream>
using namespace std;   
int main(){
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    int a=1;;
    for(int i=1; i<=n; i++){
        if(i%2!=0) a=1; //odd rows
        else a=0;   //even rows
        for(int j=1; j<=i; j++){
            cout <<a<< " ";
            //Flip the value of a for the next column
            if(a==1) a=0;   
            else a=1;        
        }
        cout << endl;
    }
}