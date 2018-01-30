#include "C.hpp"

C::C(){
}

C::C(C const& src){
	*this = src;
}
	
C::~C(){
}

C& C::operator=(C const& rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
