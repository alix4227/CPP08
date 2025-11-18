#include "easyfind.hpp"

int	main(void)
{
	int nbr = 2;
	std::vector<int>tab = {-111111, 2, 3, 4};
	if (easyfind(tab, nbr))
		std::cout << "first occurence of integer " << nbr << std::endl;
	else
		std::cout << "no occurence of nbr found" << std::endl;
	return (0);
}