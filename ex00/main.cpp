#include "easyfind.hpp"

int	main(void)
{
	int nbr = 2;
	std::vector<int>tab = {-1, 3, 0, 5, 4};
	std::vector<int>::iterator it = easyfind(tab, nbr);
	if (it != tab.end())
	{
		int position = std::distance(tab.begin(), it);
		std::cout << "first occurence of integer " << nbr  << " found at position " << position << std::endl;
	}
	else
		std::cout << "no occurence of nbr found" << std::endl;
	return (0);
}