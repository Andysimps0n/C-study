#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> arr; 
    arr.reserve(9);
    


    //fill arr
    for (int i = 1; i <= 9; i ++) {
        int input;
        cin >> input; 
        arr.push_back(input);
    }
    
    //make a copy and sort arr
    vector<int> arr_copy = arr;
    sort(arr.begin(), arr.end());

    
    //  print max number
    int max_number = arr.back();
    cout << "max_number :" << max_number;
    
    cout << "\n";
    
    //  find and get the index of the number
    for (int i; i <= arr.size(); i++) {
        if (arr[i] = max_number) {
            cout << i;
            break;
        };
    };
    

    
    return 0;
}
