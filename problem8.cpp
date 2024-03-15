#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b,n;
    int pieces = 1;
    cin>>a>>b>>n;
    
    while(a%2==0 || b%2==0){
        if (a % 2 == 0 && b % 2 == 0){
            a=a/2;
            b=b/2;
            pieces=pieces*4;
        }
        else if (a % 2 == 0) {
            a =a/2;
            pieces=pieces*2;
        } 
        else {
            b =b/2;
            pieces=pieces*2;
        }
    }
    cout<<pieces;
    if(pieces>=n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
