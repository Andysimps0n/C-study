// Getting an input 

#include <iostream>

using namespace std;


int main() {


    // Receiving  an input
    string name1;
    cout << "What is your name: ";
    cin >> name1;
    cout << "Hi " << name1 << '\n';




    // Receiving an input what may contain spaces
    string name2;
    cout << "what is your name2: ";


    // Rememeber to use "">> ws" as cin leaves \n behind
    getline(cin >> ws, name2);
    cout << "Hi " << name2;





    return 0;
}