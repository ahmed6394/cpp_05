/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:45 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/02 15:02:37 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// default constructor
Bureaucrat::Bureaucrat() : name("Default"), grade(1){}

//constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
}

// copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade)
{

}

// copy assignment
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    if(this != &obj)
        grade = obj.grade;
    return *this;
}

// destructor
Bureaucrat::~Bureaucrat () 
{

}

const std::string& Bureaucrat::getName () const{
    return name;
}

int Bureaucrat::getGrade () const{
    return grade;
}

void Bureaucrat::incrementGrade()
{
    if(grade - 1 < 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if(grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
    return "Grade is too low!";
}

void Bureaucrat::signForm(Form& f) {
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << name << " couldn't signed " << f.getName() << " because " << e.what() << '\n';
	}
	
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}