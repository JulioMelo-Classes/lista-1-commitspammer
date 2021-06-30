/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
ok
*/
int main(void)
{
	int first, consec;
	while (cin >> first >> consec) {
		int sum {first};
		if (consec > 0) {
			for (int i = 1; i < consec; ++i)
				sum += first + i;
		} else if (consec < 0) {
			for (int i = -1; i > consec; --i)
				sum += first + i;
		}
		cout << sum << endl;
	}
	return 0;
}
