#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& src);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		Bureaucrat& operator=(Bureaucrat const& rhs);
		void operator-=(int const additionalGrade);
		void operator+=(int const additionalGrade);
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const& src);
				~GradeTooHighException() throw();

				GradeTooHighException& operator=(GradeTooHighException const& rhs);

				virtual const char* what() const throw();
			protected:
			private:
		};

		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const& src);
				~GradeTooLowException() throw();

				GradeTooLowException& operator=(GradeTooLowException const& rhs);

				virtual const char* what() const throw();
			protected:
			private:
		};
	protected:
	private:
		std::string const _name;
		int _grade;
};

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& rhs);

#endif
