/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:08 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/15 14:47:11 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

AForm::AForm() : name("Default"), isSigned(false), signGrade(42), executeGrade(50){
	
}

AForm::AForm(const std::string& name, int signGrade, int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade){
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm& obj) : name(obj.name), signGrade(obj.signGrade), executeGrade(obj.executeGrade) {
	
}

AForm& AForm::operator=(const AForm& obj){
	if(this != &obj)
	{
		isSigned = obj.isSigned;
	}
	return *this;
}

AForm::~AForm(){
	
}

std::string AForm::getName() const {
	return name;
}

bool AForm::getIsSigned() const {
	return isSigned;
}

int AForm::getSignGrade() const {
	return signGrade;
}

int AForm::getExecuteGrade() const {
	return executeGrade;	
}


void AForm::beSigned(const Bureaucrat& b) {
	if(b.getGrade() > signGrade)
		throw GradeTooLowException();
	if (isSigned)
		throw std::runtime_error("From is already signed");
	isSigned = true;
}

//exceptions
const char* AForm::GradeTooHighException::what() const noexcept {
	return "AForm grade is too high!";
}

const char* AForm::GradeTooLowException::what() const noexcept {
	return "AForm grade is too low";
}

const char *AForm::FormNotSignedException::what() const noexcept
{
	return ("Form is not signed.");
}

// << operator
std::ostream& operator<<(std::ostream& out, const AForm& f) {
	out << "AForm \"" << f.getName()
		<< "\", signed: " << (f.getIsSigned() ? "yes" : "no")
		<< ", grade to sign: " << f.getSignGrade()
		<< ", grade to execute: " << f.getExecuteGrade();
	return out;
}


void AForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > executeGrade)
		throw GradeTooLowException();
	finalExecution();
}