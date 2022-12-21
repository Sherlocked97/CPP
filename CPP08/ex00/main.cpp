
#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>

int	main()
{
	std::vector<int> vector;
	vector.push_back(2);
	vector.push_back(5);
	vector.push_back(4);
	std::cout << "found at " << easyfind(vector, 4) << std::endl;

	std::array<int, 2> arr2;
	arr2[0] = 4;
	arr2[1] = 5;
	std::cout << "found at " << easyfind(arr2, 4) << std::endl;
    

	try
	{
		std::array<int, 2> arr;
		arr[0] = 4;
		arr[1] = 5;
		// int	easy = easyfind(arr2, 10);
		std::cout << "found at " << easyfind(arr2, 5) << std::endl;
		easyfind(arr, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}