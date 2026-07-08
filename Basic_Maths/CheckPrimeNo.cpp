#include <iostream>
using namespace std;
int main(){
    bool flag=true;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n==1){
        cout<<n<<" is neither prime nor composite."<<endl;
    }
    else if(n <= 0){
        cout << "Prime and composite numbers are defined only for positive integers.";
    }
    else if(flag==true){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is a composite number."<<endl;
    }
}