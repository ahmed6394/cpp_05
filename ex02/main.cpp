/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:03 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/20 16:35:52 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/PresidentialPardonForm.hpp"

int main()
{	std::cout << "\n==========Bureaucrat Creation========\n";
	Bureaucrat alice("Alic", 140);

	ShrubberyCreationForm bob("employee");

	alice.signForm(bob);
	alice.executeForm(bob);

	PresidentialPardonForm putin("President");
	alice.signForm(putin);
	alice.executeForm(putin);

}