/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:56 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/05 17:40:14 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat& obj);
        ~Bureaucrat();

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

		void signForm(AForm& f);
        
        // Nested exceptions classes
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const noexcept override;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const noexcept override;
        };

		void executeForm(AForm const & form) const;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);