#ifndef SPAN_HPP
#define SPAN_HPP
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>


class Span
{
	public:
	Span();
	// Span(Span& src);
	Span(size_t N);
	~Span();
	// Span& operator=(Span& src);
	void addNumber(size_t number);
	// int shortestSpan();
	// int longuestSpan();
	std::vector<size_t>tab;

	private:
	size_t maxSize;
	
};

#endif