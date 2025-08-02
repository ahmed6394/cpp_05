/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:21:38 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/02 15:04:00 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		std::cout << "------succeed case-------\n";
		Bureaucrat alice("Alice", 40);
		Form taxForm("Tax Form", 50, 30);
		std::cout << taxForm << std::endl;
		alice.signForm(taxForm);
		std::cout << taxForm << std::endl;
		// alice.signForm(taxForm);
		
		std::cout << "\n------Failure case-------\n";
		Bureaucrat bob("bob", 100);
		Form classified("Secret", 30, 10);
		bob.signForm(classified);
		std::cout << classified << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Fatal exception: " << e.what() << std::endl;
	}
	
	return 0;	
}