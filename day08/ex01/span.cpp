#include "Span.hpp"

Span::Span() {
	this->_arr.reserve(0);
}

Span::Span(unsigned int n) {
	this->_arr.reserve(n);
}

Span::Span(Span const& src) {
	*this = src;
}

Span::~Span() {
}

Span& Span::operator=(Span const& rhs)
{
	if (this != &rhs) {
		this->_arr = rhs._arr;
	}
	return *this;
}

void Span::addNumber(int n) {
	if (this->_arr.size() < this->_arr.capacity())
		this->_arr.push_back(n);
	else
		throw std::exception();
}

int	Span::shortestSpan() {
	if (_arr.size() < 2) {
		throw std::exception();
	}
	std::vector<int> tmp = this->_arr;
	std::sort(tmp.begin(), tmp.end());
	int minSpan = 2147483647;
	for (std::vector<int>::iterator it = tmp.begin(); it < tmp.end() - 1; ++it) {
		if (*(it + 1) - *it < minSpan)
			minSpan = *(it + 1) - *it;
	}

	return minSpan;
}

int	Span::longestSpan() {
	if (_arr.size() < 2) {
		throw std::exception();
	}
	int res = *std::max_element(_arr.begin(), _arr.end()) - *std::min_element(_arr.begin(), _arr.end());

	return res;
}
