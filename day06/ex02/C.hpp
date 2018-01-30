#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base {
	public:
		C();
		C(C const& src);
		~C();

		C& operator=(C const& rhs);
	protected:
	private:
};

#endif
