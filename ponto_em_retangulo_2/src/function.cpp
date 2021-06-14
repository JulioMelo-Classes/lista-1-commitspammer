#include "function.h"

/*!
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P)
{
	if (IE.x == SD.x && IE.y == SD.y)
		return location_t::INVALID;
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
