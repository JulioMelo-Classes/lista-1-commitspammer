/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

vector<int> get_input(void)
{
	vector<int> input;
	int num;
	while(cin >> ws >> num)
		input.push_back(num);
	return input;
}

vector<double> get_interval_ratio(vector<int> list)
{
	vector<double> ratios {0, 0, 0, 0, 0};
	for (int i : list) {
		if (i < 0 || i >= 100)
			++ratios[4];
		else if (i < 25)
			++ratios[0];
		else if (i < 50)
			++ratios[1];
		else if (i < 75)
			++ratios[2];
		else if (i < 100)
			++ratios[3];

	}
	for (double& x : ratios)
		x = x * 100 / list.size();
	return ratios;
}

int main(void)
{
	vector<int> input = get_input();
	vector<double> ratios = get_interval_ratio(input);
	for (double i : ratios)
		cout << setprecision(4) << i << endl;
	return 0;
}
