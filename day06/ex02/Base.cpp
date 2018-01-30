#include "Base.hpp"

Base::Base(){
}

Base::Base(Base const& src){
	*this = src;
}
	
Base::~Base(){
}

Base& Base::operator=(Base const& rhs){
	if (this != &rhs)
		*this = rhs;
	return *this;
}
