#ifndef BASE_HPP
#define BASE_HPP

class Base {
	public:
		Base();
		Base(Base const& src);
		virtual ~Base();

		Base& operator=(Base const& rhs);
	protected:
	private:
};

#endif
