#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& arr, int n) {
	typename T::iterator start = std::find(arr.begin(), arr.end(), n);
	if (start == arr.end()) {
		throw std::exception();
	}

	return start;
}

#endif
