/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:03 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/23 12:32:29 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include "inc/RobotomyRequestForm.hpp"

int main()
{	std::cout << "\n==========Bureaucrat Creation=========\n";
	Bureaucrat alice("Alice", 140);
	std::cout << alice << std::endl;

	std::cout << "\n==========Shrubbery Creation=========\n";
	ShrubberyCreationForm bob("employee");
	alice.signForm(bob);
	alice.executeForm(bob);

	std::cout << "\n==========Presidential Pardon Creation=========\n";
	PresidentialPardonForm putin("President");
	alice.signForm(putin);
	alice.executeForm(putin);

	std::cout << "\n==========Robotomy Creation=========\n";
	RobotomyRequestForm trump("robot");
	alice.signForm(trump);
	alice.executeForm(trump);

}