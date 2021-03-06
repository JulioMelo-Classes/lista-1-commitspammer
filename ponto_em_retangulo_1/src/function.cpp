#include "function.h"

using namespace std;
/*!
 * Verifica se um ponto está dentro de um retângulo.
 */

/*
ok
*/
location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P)
{
	if (P.x < IE.x || P.x > SD.x)
		return location_t::OUTSIDE;
	if (P.y < IE.y || P.y > SD.y)
		return location_t::OUTSIDE;
	if (P.x == IE.x || P.x == SD.x)
		return location_t::BORDER;
	if (P.y == IE.y || P.y == SD.y)
		return location_t::BORDER;
	return location_t::INSIDE;
}
