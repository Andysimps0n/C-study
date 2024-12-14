#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() { 
 
   int count;
   vector<float> subjects(count);

   cin >> count;

   for (int i = 0; i < count; i++){
      float input;
      cin >> input;
      subjects[i] = input;
   }

   // auto max_it = max_element(subjects.begin(), subjects.end());
   int max_val = *max_element(subjects.begin(), subjects.end());

   for (int i = 0; i < count; i++){
      subjects[i] = subjects[i] / max_val * 100;
   }

   for (float e : subjects) {
      cout << e << ' '; 
   }

 
 
   return 0;
}