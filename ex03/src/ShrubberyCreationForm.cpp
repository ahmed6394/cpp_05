/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:43:19 by gahmed            #+#    #+#             */
/*   Updated: 2025/08/15 14:51:39 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

// Default construction
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("default") {}

// Parameter construction
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), target(target) {}

// Copy construction
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
	: AForm(obj), target(obj.target) {}

// Assignement operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		AForm::operator=(obj);
		target = obj.target;
	}
	return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

void tree(std::ofstream &outputfile)
{
	outputfile << "                               			           		   \n";
    outputfile << "                              			        	       \n";
	outputfile << "  			ccee88oo  	       cceydhde88oo\n";
	outputfile << "  		C8O8O8Q8PoOb o8oo  C8dytyyO8O8Q8PoOb o8oo\n";
	outputfile << "  	dOB69QO8PdUOpugoO9bDdOBdfsgdq69QO8PdUOpugoO9bD\n";
	outputfile << "  	CgggbU8OU qOp qOdoUOdbCgggbU8OU qOp qOdoUOdcb\n";
	outputfile << "  		6OuU  /p u gcoUodpP    6OuU  /p u gcoUodpP\n";
	outputfile << "  			\\//  /douUP            \\//  /douUP\n";
	outputfile << "  			\\////                  \\////\n";
	outputfile << "  			|||//                   |||/\\\n";
	outputfile << "  			|||//                   |||\\\n";
	outputfile << "  			|||||                   |||||\n";
	outputfile << "  		..//||||\\....        .....//||||\\....\n";
	outputfile << "          				                         	        \n";
	outputfile << "            					                                \n";
}

// Member function
void ShrubberyCreationForm::finalExecution() const
{
	std::ofstream outputfile(target + "_schrubbery");
	if (!outputfile.is_open())
		throw std::runtime_error("Failed to opem outputfile");
	std::cout << "Schrubbery Creation for " << target << std::endl;
	tree(outputfile);
	outputfile.close();
	
}