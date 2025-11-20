#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <iostream>


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();

	private:
	
	
};

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	
	return (this->c.end());
}
#endif


