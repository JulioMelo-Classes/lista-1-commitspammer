#include "function.h"
#include <utility>

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max(int V[], std::size_t n)
{
	if (n <= 0)
		return {-1, -1};
	int large_i {0};
	int small_i {0};
	for (int i = 0; i < n; ++i) {
		if (V[i] >= V[large_i])
			large_i = i;
		if (V[i] < V[small_i])
			small_i = i;
	}
	return {small_i, large_i};
}
