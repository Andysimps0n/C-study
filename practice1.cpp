#include <iostream>
using namespace std;

namespace first{
    int five = 5;
}


namespace second{
    int five = 6;
}


int main() {

    int five = 7;

    cout << first::five;
    cout << second::five;
    cout << five;

}