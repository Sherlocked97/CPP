
#pragma once

#include <iostream>

template	<typename T_iter>
void	iterate(T_iter *array, int length, void (*function)(T_iter &))
{
	for (int i = 0; i < length; i++)
		function(array[i]);
}

template	<typename T_print>
void	print(T_print &n)
{
	std::cout << n << std::endl;
}

template	<typename T_increment>
void	increment(T_increment &n)
{
	n++;
}