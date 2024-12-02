#include <iostream>
#include <vector>
using namespace std;

int main() {

    int* numbers = new int[3]();
    cin >> numbers[0] >> numbers[1] >> numbers[2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j+1];
                numbers[j + 1] = numbers[j];
                numbers[j] = temp;
            }
        }
    } 

    for (int i = 0; i < 3; i++) {
        cout << numbers[i] << '\n';
    }


    return 0;
}
