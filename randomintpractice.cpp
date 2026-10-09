
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Randomnum();
int main()
{
    srand(time(0));
    int num = 0;
    num = Randomnum();
    cout << num << endl;
    cout << Randomnum() << endl;

    return 0;
}
int Randomnum() {
    return rand() % 10 + 1;
}