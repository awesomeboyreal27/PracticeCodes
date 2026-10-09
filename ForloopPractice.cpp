// 1 initialize // 2 test // 3 
#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i <= 10; i++) {
		sum += i;
	}
	cout << "The sum is: " << sum << endl;

	sum = 0;
	int i = 1;
	while (i <= 10) {
		cout << sum;
		sum += i;
		i++;
	}
}
