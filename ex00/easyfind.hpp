#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>

class noOccurenceFoundException: public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("no occurence of nbr found");
	}
};

template <typename T>
typename T::iterator	easyfind(T& tab, int nbr)
{
	for(typename T::iterator it=tab.begin(); it!=tab.end(); ++it)
	{
		if (*it == nbr)
			return (it);
	}
	throw(noOccurenceFoundException());
	return (tab.end());
}



// bool	easyfind(const T& tab, int nbr)
// {
// 	std::vector<int>nb(1,nbr);
// 	if (find_first_of(tab.begin(), tab.end(), nb.begin(), nb.end()) != tab.end())
// 		return (true);
// 	return (false);
// }
#endif