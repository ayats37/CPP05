/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:49:40 by taya              #+#    #+#             */
/*   Updated: 2026/01/17 11:04:56 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::srand(std::time(NULL));

    Intern intern;
    Bureaucrat a("aya", 1);

    AForm* f1 = intern.makeForm("robotomy request", "test1");
    if (f1)
    {
        a.signForm(*f1);
        a.executeForm(*f1);
        delete f1;
    }

    AForm* f2 = intern.makeForm("unknown form", "test2");
    if (f2)
        delete f2;

    return 0;
}
