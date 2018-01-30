#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& src);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		Span& operator=(Span const& rhs);
	protected:
	private:	
		std::vector<int> _arr;
};

#endif
