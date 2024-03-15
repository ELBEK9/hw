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
    
    vector<int> squares(n);
    for(int i=0;i<n;i++){
        squares[i] = numbers[i] * numbers[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (squares[j] > squares[j + 1]) {
                swap(squares[j], squares[j + 1]);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<squares[i]<<" ";
    }
    
    return 0;
}
