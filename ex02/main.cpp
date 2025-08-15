/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:03 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/15 14:52:22 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/ShrubberyCreationForm.hpp"

int main()
{	std::cout << "\n==========Bureaucrat Creation========\n";
	Bureaucrat alice("Alic", 130);

	ShrubberyCreationForm bob("employee");

	alice.signForm(bob);
	alice.executeForm(bob);
}