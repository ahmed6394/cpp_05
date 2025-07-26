/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:45 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/26 11:07:45 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{

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
        // higher
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if(grade + 1 > 150)
        // lower
    grade++;
}



std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return out;
}