#include "A.hpp"

A::A(){
}

A::A(A const& src){
	*this = src;
}
	
A::~A(){
}

A& A::operator=(A const& rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
