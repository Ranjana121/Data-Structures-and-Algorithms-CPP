#include <iostream>
using namespace std;   
int main(){
    int n;
    cout << "Enter the number of lines ";
    cin >> n;
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int top = i;
            int left = j;
            if(top > n) top = 2*n - i;
            if(left > n) left = 2*n - j;
            int x = min(top, left);
            cout << n - x + 1 << " ";
            }
            cout << endl;
        }
    }