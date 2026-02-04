# include "Span.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Span sp(5);
	sp.generateRandomNumbers();
	sp.printTab();
	Span s(sp);
	// try
	// {
	// 	sp.addNumber(1000);
	// 	sp.addNumber(1050);
	// 	sp.addNumber(1004);
	// 	sp.addNumber(10);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// 	return (1);
	// }
	// s.generateRandomNumbers();
	s.printTab();
	try
	{
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}