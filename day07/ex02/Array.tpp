#include <iostream>

template <typename T = int>
class Array {
	public:
		Array<T>() : _arr(0), _size(0) {
		}

		Array<T>(unsigned int n) : _size(n) {
			if (_size != 0) {
				this->_arr = new T[n];
			} else {
				_arr = 0;
			}
		}

		Array<T>(Array<T> const& src) : _arr(0), _size(0) {
			*this = src;
		}

		~Array<T>() {
			if (_arr) {
				delete [] _arr;
			}
		}

		unsigned int size() const {
			return this->_size;
		}

		Array<T>& operator=(Array<T> const& rhs) {
			if (this != &rhs) {
				if (this->_arr) {
					delete [] this->_arr;
					this->_arr = 0;
				}
				this->_size = rhs.size();
				if (this->_size != 0) {
					this->_arr = new T[this->_size];
					for (unsigned int i = 0; i < this->_size; ++i) {
						this->_arr[i] = rhs._arr[i];
					}
				}
			}
			return *this;
		}

		T& operator[](unsigned int position) {
			if (position >= this->_size) {
				throw std::exception();
			} else {
				return this->_arr[position];
			}
		}

	protected:
	private:
		T* _arr;
		unsigned int _size;
};
