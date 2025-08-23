/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:03 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/23 16:45:08 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Intern.hpp"
#include "inc/Bureaucrat.hpp"

int main()
{	
	Intern someRandomIntern;
	AForm* Shrubbery = someRandomIntern.makeForm("shrubbery creation", "bob");
	AForm* President = someRandomIntern.makeForm("presidential pardon", "bob");
	AForm* Robotomy = someRandomIntern.makeForm("robotomy request", "bob");
	AForm* Promo = someRandomIntern.makeForm("Promotion request", "bob");

	Bureaucrat ceo("Moritz", 1);
	std::cout << ceo << std::endl;
	
	ceo.signForm(*Promo);
	ceo.executeForm(*Promo);


	delete Shrubbery;
	delete President;
	delete Robotomy;
	delete Promo;

}