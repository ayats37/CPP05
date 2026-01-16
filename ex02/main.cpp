/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:49:40 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:39:42 by taya             ###   ########.fr       */
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
    f.signForm(shrub);    // should fail (145)
    p.signForm(shrub);    // ok

    p.signForm(robot);    // ok (72)
    f.signForm(robot);    // fail

    p.signForm(pardon);   // fail (25)
    a.signForm(pardon);  // ok

    std::cout << "\n===== Execute forms =====" << std::endl;
    f.executeForm(shrub);   // fail (137)
    p.executeForm(shrub);   // ok -> creates file

    p.executeForm(robot);   // fail (45)
    a.executeForm(robot);  // ok -> 50%

    p.executeForm(pardon);  // fail (5)
    a.executeForm(pardon); // ok

    return 0;
}
