#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() { 
   int count;
   cin >> count;
   
   vector<float> subjects(count);
   float max_val = 0;

   for (int i = 0; i < count; i++){
      float input;
      cin >> input;
      subjects[i] = input;
      if ( input > max_val ) {
         max_val = input;
      }
   }


   float total;
   for (float e : subjects) {
      total += (e / max_val) * 100;
   }

   cout << total / count << endl;

 
 
   return 0;
}