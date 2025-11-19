# include "Span.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Span sp(3);
	try
	{
		sp.addNumber(1000);
		sp.addNumber(1050);
		sp.addNumber(1004);
		sp.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	// sp.generateRandomNumbers();
	sp.printTab();
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longuestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}