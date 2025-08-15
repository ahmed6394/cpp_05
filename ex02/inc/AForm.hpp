/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:25 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/15 12:27:37 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
		
	public:
		AForm(); // default const
		AForm(const std::string& name, const int signGrade, const int executeGrade); // param const
		AForm(const AForm& obj); // copy const
		AForm& operator=(const AForm& obj); // assignment operator
		virtual ~AForm(); // destructor

		std::string getName() const;
		bool getIsSigned() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		

		void beSigned(const Bureaucrat& b);
		
		//nested exception class
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

		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const noexcept override;
		};

		// member functions
		void execute(Bureaucrat const & executor) const;

		// pure virtual/ abstruct function
		virtual void finalExecution() const = 0;
		
		
};

std::ostream& operator<<(std::ostream&out, const AForm& f);