#include <iostream>
#include <vector>
using namespace std;
 
int main() { 
 
   vector<int> arr = {1, 2, 3, 4, 5};
   arr.erase(arr.begin() + 1);


   cout << arr.size() << endl;
   
   return 0;
}