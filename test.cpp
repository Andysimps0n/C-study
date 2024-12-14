#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
 
int main() { 
 
   int size, steps;
   cin >> size >> steps;

   vector<int> arr(size);

    for (int i = 1; i <= size; i++){
        arr[i-1] = i;
    }

   for (int i = 0; i < steps; i++){
      int start, end;
      cin >> start >> end;
      start --;

      vector<int> sliced(arr.begin() + start, arr.begin() + end);
      reverse(sliced.begin(), sliced.end());


      for (int j = 0; j < sliced.size(); j++){
         arr[start + j] = sliced[j];
      }

   }

   for (int e : arr) {
      cout << e << ' '; 
   }
 
   return 0;
}

