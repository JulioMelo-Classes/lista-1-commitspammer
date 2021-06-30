#include <iterator>
#include "function.h"
#include <array>
/*!
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
/*
ok
*/
void reverse(std::array<std::string,SIZE>& arr)
{
	for (int i = 0; i < arr.size()/2; i++)
		std::swap(arr[i], arr.end()[-1-i]);
}
