/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahmed <gahmed@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:07:56 by gahmed            #+#    #+#             */
/*   Updated: 2025/07/26 11:07:56 by gahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(); // default constructor
        Bureaucrat(const std::string, int grade); // parameterise contructor
        Bureaucrat(const Bureaucrat& obj); // copy constructor
        Bureaucrat& operator=(const Bureaucrat& obj); // copy assignment operator
        ~Bureaucrat(); // destruntor

        const std::string& getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

};