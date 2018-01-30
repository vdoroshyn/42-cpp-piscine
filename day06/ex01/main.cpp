#include <iostream>

struct Data {
	std::string str1;
	int num;
	std::string str2;
};

void* serialize() {
	char* tempMemory = new char[20];
	char hash[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	std::cout << "  Serialized output: ";

	for (int i = 0; i < 8; ++i) {
		tempMemory[i] = hash[std::rand() % strlen(hash)];

		std::cout << tempMemory[i];

	}
	int randInt = rand();
	std::cout << " int: " << randInt << " string: ";
	*(reinterpret_cast<int*>(&tempMemory[8])) = randInt;

	for (int i = 12; i < 20; ++i) {
		tempMemory[i] = hash[std::rand() % strlen(hash)];

		std::cout << tempMemory[i];

	}

	std::cout << std::endl;

	return reinterpret_cast<void*>(tempMemory);
}

Data* deserialize(void* raw) {
	Data* data = new Data;

	data->str1.assign(reinterpret_cast<char*>(raw), 8);
	data->num = *reinterpret_cast<int*>(&reinterpret_cast<char*>(raw)[8]);
	data->str2.assign(&reinterpret_cast<char*>(raw)[12], 8);

	return data;
}

int main() {
	std::srand(std::time(0));

	void* ptr;
	Data* data;

	ptr = serialize();
	data = deserialize(ptr);

	std::cout << "Deserialized output: " << data->str1 << " int: " << data->num << " string: " << data->str2 << std::endl;

	delete [] reinterpret_cast<char*>(ptr);
	delete data;

	return 0;
}
