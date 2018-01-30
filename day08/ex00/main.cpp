#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	{
		std::vector<int> vector;

		vector.push_back(100);
		vector.push_back(200);
		vector.push_back(300);

		try {
			*easyfind(vector, 200) = 15;
			std::cout << *easyfind(vector, 200) << std::endl;
			std::cout << *easyfind(vector, 15) << std::endl;
			
		} catch (std::exception e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "****************************************************************************************" << std::endl;
	{
		std::vector<int> vector;

		vector.push_back(100);
		vector.push_back(200);
		vector.push_back(300);

		try {
			*easyfind(vector, 200);
			std::cout << *easyfind(vector, 200) << std::endl;
			std::cout << *easyfind(vector, 15) << std::endl;
			
		} catch (std::exception e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
