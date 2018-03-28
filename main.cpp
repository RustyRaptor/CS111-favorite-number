#include <iostream>


// use the names int he standard library directly rather than having to call the stdlib manually each time.
using namespace std;

// main function needed to return an int for some reason instead of void. Probably because the program does return ints
int main(){
    int n;

    cout << "What's your favorite number?, ";
    cin >> n;


    n+=1;

    cout << endl; // writes a newline
    cout << "My favorite number is 1 more than that, "
         << n << endl; // prints n and a newline
    cout << endl; // writes 3 new lines (kind of redundant)
    cout << endl << endl;
}