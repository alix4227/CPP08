#ifndef SPAN_HPP
#define SPAN_HPP
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>


class Span
{
	private:
	size_t maxSize;
	std::vector<size_t>tab;

	public:
	Span();
	Span(Span& src);
	Span(size_t N);
	~Span();
	Span& operator=(Span& src);
	void	addNumber(size_t number);
	int		shortestSpan();
	int		longestSpan();
	void	generateRandomNumbers();
	void	printTab(void);
	
};
int			randomNumbers();
#endif