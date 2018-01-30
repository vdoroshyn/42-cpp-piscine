#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base {
	public:
		B();
		B(B const& src);
		~B();

		B& operator=(B const& rhs);
	protected:
	private:
};

#endif
