#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony *horse = new Pony("heapHorse");
	horse->makeSounds();
	horse->poop();
	delete horse;
}

void ponyOnTheStack() {
	Pony horse = Pony("stackHorse");
	horse.makeSounds();
	horse.poop();
}

int main() {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
