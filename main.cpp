#include <iostream>
using namespace std;
 
int main() { 
 
   int total, reciptTotal, iteration;
   cin >> total;
   cin >> iteration;

   for (int i = 0; i < iteration; i++){
      int price, quantity;
      cin >> price, quantity;

      reciptTotal += price * quantity;
   }

   (total == reciptTotal) ? cout << "Yes" : cout << "No"; 
 
 
   return 0;
}