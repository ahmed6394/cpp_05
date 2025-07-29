/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:25:29 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/29 17:22:05 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool isSigned;
		const int signGrade;
		const int executeGrade;
		
	public:
		Form(); // default const
		Form(const std::string& name, const int signGrade, const int executeGrade); // param const
		Form(const Form& obj); // copy const
		Form& operator=(const Form& obj); // assignment operator
		~Form(); // destructor

		const std::string getName() const;
		bool getIsSigned() const;
		const int getSignGrade() const;
		const int getExecuteGrade() const;
		

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
		
};

std::ostream& operator<<(std::ostream&out, const Form& f);