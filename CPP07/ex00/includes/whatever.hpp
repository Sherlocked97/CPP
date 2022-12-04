
#pragma once

#include <iostream>

template	<typename Max>
Max	max(Max a, Max b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template	<typename Min>
Min	min(Min a, Min b)
{
	if (a < b)
		return (a);
	else
 		return (b);
}

template	<typename Swap>
void swap(Swap &a, Swap &b)
{
	Swap temp;

	temp = a;
	a = b;
	b = temp;
}
