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
			throw std::runtime_error("Nombre maximum d'integers atteints");
	}

	void	Span::generateRandomNumbers()
	{
		tab.resize(maxSize);
		std::generate(tab.begin(), tab.end(), randomNumbers);
	}

	int randomNumbers()
	{
		return (std::rand() % 20);
	}

	int Span::shortestSpan()
	{
		if (tab.size() == 0 || tab.size() == 1)
			throw std::runtime_error("Nombre insuffisant d'integers");
		size_t i = 0;
		size_t spanMin = 0;
		size_t span;
		while (i < tab.size())
		{
			size_t j = i + 1; 
			while (j < tab.size())
			{
				span = tab[j] - tab[i];
				if (j == 1)
					spanMin = span;
				if (span < spanMin)
					spanMin = span;
				j++;
			}
			i++;
		}
		return (spanMin);
	}

	int Span::longuestSpan()
	{
		if (tab.size() == 0 || tab.size() == 1)
			throw std::runtime_error("Nombre insuffisant d'integers");
		size_t i = 0;
		size_t spanMax = 0;
		size_t span;
		while (i < tab.size())
		{
			size_t j = i + 1; 
			while (j < tab.size())
			{
				span = tab[j] - tab[i];
				if (j == 1)
					spanMax = span;
				if (span > spanMax)
					spanMax = span;
				j++;
			}
			i++;
		}
		return (spanMax);
	}