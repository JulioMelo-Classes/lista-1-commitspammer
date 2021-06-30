#include <iostream>

using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
	int num;
	int count {0};
	for (int i = 0; i < SIZE; i++) {
		cin >> num;
		if (num < 0)
			count++;
	}
	cout << count;
	return 0;
}
