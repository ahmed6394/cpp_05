/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:25:17 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/02 14:05:04 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), isSigned(false), signGrade(42), executeGrade(50){
	
}

Form::Form(const std::string& name, int signGrade, int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade){
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& obj) : name(obj.name), signGrade(obj.signGrade), executeGrade(obj.executeGrade) {
	
}

Form& Form::operator=(const Form& obj){
	if(this != &obj)
	{
		isSigned = obj.isSigned;
	}
	return *this;
}

Form::~Form(){
	
}

const std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

const int Form::getSignGrade() const {
	return signGrade;
}

const int Form::getExecuteGrade() const {
	return executeGrade;	
}


void Form::beSigned(const Bureaucrat& b) {
	if(b.getGrade() > signGrade)
		throw GradeTooLowException();
	isSigned = true;
}

//exceptions
const char* Form::GradeTooHighException::what() const noexcept {
	return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const noexcept {
	return "Form grade is too low";
}

// << operator
std::ostream& operator<<(std::ostream& out, const Form& f) {
	out << "Form \"" << f.getName()
		<< "\", signed: " << (f.getIsSigned() ? "yes" : "no")
		<< ", grade to sign: " << f.getSignGrade()
		<< ", grade to execute: " << f.getExecuteGrade();
	return out;
}