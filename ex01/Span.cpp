#include "Span.hpp"
	
	Span::Span()
	{

	}

	// Span(Span& src);
	Span::Span(size_t N)
	{
		tab.reserve(N);
		maxSize = N;
	}

	Span::~Span()
	{

	}
	// Span& operator=(Span& src);
	void Span::addNumber(size_t nbr)
	{
		if (tab.size() < maxSize)
			tab.push_back(nbr);
		else
			std::cout << "lame" << std::endl;
	}

	// int shortestSpan();
	// int longuestSpan();