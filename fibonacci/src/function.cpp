#include "function.h"

/*blz*/
std::vector<unsigned int> fib_below_n(unsigned int n)
{
	if (n <= 1)
		return {};
	std::vector<unsigned int> terms {1, 1};
	unsigned int i;
	do {
		//i = terms[terms.size()-1] + terms[terms.size()-2];
		i = terms.end()[-1] + terms.end()[-2]; //boa ideia usar de trás pra frente!
		if (i < n)
			terms.push_back(i);
	} while (i < n);
	return terms;
}
