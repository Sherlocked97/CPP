
#include "MutantStack.hpp"
#include <vector>
#include <deque>
#include <iostream>
#include <iomanip>


void	testVector(void)
{
	std::deque<int>	mstack;

	mstack.push_back(1);
	mstack.push_back(2);

	std::cout << "top = " << *(mstack.end() - 1) << std::endl;
	
	mstack.pop_back();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(4);
	mstack.push_back(5);
	mstack.push_back(6);
	mstack.push_back(10);

	std::deque<int>::iterator	it = mstack.begin();
	std::deque<int>::iterator	ite = mstack.end();

	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << "NUMBER [" << i << "] ITERATOR: [" <<*it << "]" <<std::endl;
		i++;
		++it;
	}
}

void	testSubject(void)
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(2);

	std::cout << "top = " << mstack.top() << std::endl;
	
	mstack.pop();

	std::cout << "size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	mstack.push(6);
	mstack.push(10);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;
	int i = 0;
	while (it != ite)
	{
		std::cout << "NUMBER [" << i << "] ITERATOR: [" <<*it << "]" <<std::endl;
		i++;
		++it;
	}
	
	std::stack <int>	s(mstack);
}

int	main(void)
{
	testSubject();
	std::cout << std::endl;
	testVector();
	
	return (0);
}