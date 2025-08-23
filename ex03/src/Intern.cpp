/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:18:50 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/23 15:41:25 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) { (void)obj; }

Intern &Intern::operator=(const Intern &obj)
{
	(void)obj;
	return *this;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if(name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			switch (i)
			{
			case 0: return new ShrubberyCreationForm(target);
			case 1: return new RobotomyRequestForm(target);
			case 2: return new PresidentialPardonForm(target);
			}
		}
	}
	std::cerr << "Intern can't create " << name << " form" << std::endl;
	return NULL;
}