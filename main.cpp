#include <iostream>
#include <vector>
using namespace std;
 
int main() { 
 
   vector<int> arr(10);

   for(int i = 0; i < arr.size(); i++) {
      int input;
      cin >> input;
      arr[i] = input % 42;
   }


   int differentNumber;

   for (int i : arr) {
      for (int j : arr) {
         if (i == j) { differentNumber++;}
      }
   }

   cout << differentNumber;



   
   return 0;
}