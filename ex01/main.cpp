# include "Span.hpp"

int	main(void)
{
	Span sp(3);
	sp.addNumber(10);
	sp.addNumber(20);
	sp.addNumber(30);
	sp.addNumber(40);
	size_t i = 0;
	while (i < sp.tab.size())
	{
		std::cout << sp.tab[i] << std::endl;
		i++;
	}
}