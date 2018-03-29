

#include <iostream>

// use the names int he standard library directly rather than having to call the
// stdlib manually each time.
using namespace std;

int main() {
	int n;

	cout << "What's your favorite number?, ";
	// set n to the user's input
	cin >> n;

	// add one to n
	n += 1;


	cout << endl; // writes a newline
	cout << "My favorite number is 1 more than that, " << n << endl;
	cout << endl;
	cout << endl << endl; // writes 3 new lines (kind of redundant)

	return 0;
}