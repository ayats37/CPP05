/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:49:40 by taya              #+#    #+#             */
/*   Updated: 2026/01/17 10:52:32 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::srand(std::time(NULL));

    std::cout << "===== Bureaucrats =====" << std::endl;
    Bureaucrat a("Aya", 1);
    Bureaucrat p("ptipana", 50);
    Bureaucrat f("fifi", 150);

    std::cout << a << std::endl;
    std::cout << p << std::endl;
    std::cout << f << std::endl;

    std::cout << "\n===== Forms =====" << std::endl;
    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("rbt");
    PresidentialPardonForm pardon("sorry");

    std::cout << shrub << std::endl;
    std::cout << robot << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n===== Sign forms =====" << std::endl;
    f.signForm(shrub);
    p.signForm(shrub);

    p.signForm(robot);
    f.signForm(robot);

    p.signForm(pardon);
    a.signForm(pardon);

    std::cout << "\n===== Execute forms =====" << std::endl;
    f.executeForm(shrub);
    p.executeForm(shrub);

    p.executeForm(robot);
    a.executeForm(robot);

    p.executeForm(pardon);
    a.executeForm(pardon); 

    return 0;
}
