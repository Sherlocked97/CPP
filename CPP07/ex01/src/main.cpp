
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
	iterate(array2, 5, &increment);
    iterate(array3, 5, &print);
    
    return 0;
}

// class Awesome
// {
// public:
// Awesome( void ) : _n( 42 ) { return; }
// int get( void ) const { return this->_n; }
// private:
// int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() {
// int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// Awesome tab2[5];
// iterate( tab, 5, print );
// iterate( tab2, 5, print );
// return 0;
// }