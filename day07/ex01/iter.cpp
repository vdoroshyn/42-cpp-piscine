#include <iostream>

template <typename T>
void iter(T* arr, int size, void (*func)(T)) {
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}

template <typename T>
void foo(T smth) {
	std::cout << smth << std::endl;
}

int main() {
	int arr1[] = {16, 2, 77, 40, 12071};
	std::string arr2[] = {"lol", "kek", "wow"};
	float arr3[] = {14.4, 45.4, 56.5, 1.1};
	iter(arr1, 5, foo);
	std::cout << std::endl;
	iter(arr2, 3, foo);
	std::cout << std::endl;
	iter(arr3, 4, foo);
	std::cout << std::endl;

	return 0;
}
