#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default name"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooLowException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		this->_grade = grade;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
}

//getters

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

//operators

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs) {
	this->_grade = rhs._grade;
	return *this;
}

void Bureaucrat::operator-=(int const additionalGrade) {
	if (this->getGrade() + additionalGrade > 150) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= additionalGrade;
}

void Bureaucrat::operator+=(int const additionalGrade) {
	if (this->getGrade() + additionalGrade < 1) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade += additionalGrade;
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat const& src) {

	stream << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return stream;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const& src) {
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const&) {
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Error : Bureaucrat grade set too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const& src) {
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const&) {
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Error : Bureaucrat grade set too low");
}
