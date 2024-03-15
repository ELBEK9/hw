#include <iostream>
#include <vector>
using namespace std;

int searchValue(vector<int>& nums, int num){
    for(int i=0;i<=nums.size();i++){
        if(nums[i]==num){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, num;
    cin>>n;
    
    vector<int> numbers(n);
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    
    cin>>num;
    cout<<searchValue(numbers, num);
    
    return 0;
}
