/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ws;
#include <algorithm>
/*using std::min;
using std::max;*/
using std::swap;
#include <vector>
using std::vector;

#include "function.h"

vector<Ponto> get_coordinates()
{
	vector<Ponto> coords;
	Ponto P;
	int i {0};
	while (i < 3 && cin >> ws >> P.x >> P.y) {
		coords.push_back(P);
		++i;
	}
	return coords;
}


void fix_coordinates(vector<Ponto>& coords)
{
	if (coords[0].x > coords[1].x)
		swap(coords[0].x, coords[1].x);
	if (coords[0].y > coords[1].y)
		swap(coords[0].y, coords[1].y);
}
/*ok!*/
int main(void)
{
	while (true) {
		vector<Ponto> coords = get_coordinates();
		if (coords.size() < 3)
			break;
		fix_coordinates(coords);
		switch (pt_in_rect(coords[0], coords[1], coords[2])) {
		case location_t::OUTSIDE:
			cout << "outside" << endl; break;
		case location_t::INSIDE:
			cout << "inside" << endl; break;
		case location_t::BORDER:
			cout << "border" << endl; break;
		case location_t::INVALID:
			cout << "invalid" << endl; break;
		}
		coords.clear();
	}
	return 0;
}
