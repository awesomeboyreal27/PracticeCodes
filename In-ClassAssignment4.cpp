#include <iostream>
//create a for loop code that prints out 5 stars (Sample output: *****)
using namespace std;
int main() {
	for (int i = 1; i <= 5; i++) {
		cout << "*";
	}
	cout << endl;
// create a while loop code that prints out 5 stars
	int i = 1;
	while (i <= 5) {
		cout << "*";
		i++;
	}
	cout << endl;
// create a code that takes the sum of 10 numbers and prints the sum at the end
	int sum = 0;
	int input = 0;
	for (int i = 1;i <= 10;i++) {
		cout << "enter a number: ";
		cin >> input;
		cout << endl;
		sum = sum + input;
		if (i == 10) {
			cout << sum;
		}
	}

}
