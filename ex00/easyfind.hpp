#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>

template <typename T>
// bool	easyfind(const T& tab, int nbr)
// {
// 	vector<int>nb(nbr);
// 	if (find(tab.begin(), tab.end(), nbr) != tab.end())
// 		return (true);
// 	return (false);
// }

bool	easyfind(const T& tab, int nbr)
{
	std::vector<int>nb(1,nbr);
	if (find_first_of(tab.begin(), tab.end(), nb.begin(), nb.end()) != tab.end())
		return (true);
	return (false);
}
#endif