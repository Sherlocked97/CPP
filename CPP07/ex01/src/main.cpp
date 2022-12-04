
#include "../includes/iter.hpp"

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
	iterate(array, 5, &increment);
    iterate(array, 5, &print);
    
    float array2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iterate(array2, 5, &increment);
    iterate(array2, 5, &print);

    std::string array3[5] = {"1", "2", "3", "4", "5"};
    iterate(array3, 5, &print);
    
    return 0;
}