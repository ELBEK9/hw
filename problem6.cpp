#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    
    for(int i=0;i<numbers.size();i++){
        int count=0;
        for(int j=0;j<numbers.size();j++){
            if(numbers[i]>numbers[j]){
                count++;
            }
        }
        cout<<count<<" ";
    }
    
    
    return 0;
}

