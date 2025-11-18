# include "Span.hpp"

int	main(void)
{
	
	std::srand(std::time(0));
	Span sp(1);
	size_t i = 0;
	sp.generateRandomNumbers();
	sort(sp.tab.begin(), sp.tab.end());
	while (i < sp.tab.size())
	{
		std::cout << sp.tab[i] << std::endl;
		i++;
	}
	try
	{
		sp.shortestSpan();
		std::cout << sp.shortestSpan() << std::endl;
		sp.longuestSpan();
		std::cout << sp.longuestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}