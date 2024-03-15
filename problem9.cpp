#include <iostream>
#include <vector>
using namespace std;

bool compareStudents(pair<int, int> s1, pair<int, int> s2) {
    if(s1.second == s2.second) {
        return s1.first < s2.first;
    }
    return s1.second > s2.second;
}

int main()
{
    int n;
    cin>>n;
    
    vector<pair<int, int>> students(n);
    for(int i=0; i<n ;i++) {
        students[i].first = i + 1; 
        cout<<"Enter the grades of student "<<students[i].first<<": ";
        cin>>students[i].second;
        for(int j=0; j<2 ;j++) {
            int grade;
            cin>>grade;
            students[i].second=students[i].second + grade;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (!compareStudents(students[j], students[j + 1])) {
                swap(students[j], students[j + 1]);
            }
        }
    }
    
    int rank = 1;
    for(auto student:students) {
        if (student.first == 2) {
            break;
        }
        rank++;
    }
    
    cout<<rank;
    
    return 0;
}
