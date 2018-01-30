#include "B.hpp"

B::B(){
}

B::B(B const& src){
	*this = src;
}
	
B::~B(){
}

B& B::operator=(B const& rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
