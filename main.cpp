#include <iostream>
#include <vector>
using namespace std;
 
int main() { 
 
   int size;
   cin >> size;

   vector<int> arr(size);

   for(int i = 0; i< size; i++){
      cin >> arr[i];
   }

   int max = arr[0];
   for (int element : arr){ 
      if (element > max) { max = element;}
   }
   int min = arr[0];
   for (int element : arr){ 
      if (element < min) { min = element;}
   }

   cout << min << " " << max; 
   return 0;
}
