#include<iostream>
using namespace std;
int main(){
    int a, c=0 ;

    cout<<"Enter your number";
    cin>>a;
    for ( int i=1; i<=a; i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==1){
            cout<<"this is a prime number";
        }
        else{
            cout<<"this is not a prime number";
        }

return 0;
}
