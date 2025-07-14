// RJP: Code derived from blueprint; Fibonacci Number Generation algorithm


#include "ItemPowerCalculator.h"

int32 UItemPowerCalculator::ItemPowerCalculator(int32 n)
{
	int32 a = 0;
	int32 b = 0;
	int32 c = 0;

	for (int32 i = 0; i <= n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}