#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<n*n<<endl;

    return 0;
}
