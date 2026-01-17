/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:50:35 by taya              #+#    #+#             */
/*   Updated: 2026/01/17 10:58:53 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern& other) {
  (void)other;
}
Intern& Intern::operator=(const Intern& other) { 
  (void)other;
  return *this;
}
Intern::~Intern() {}

static AForm* createShrubbery(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target)
{
    return new PresidentialPardonForm(target);
}
AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
  std::string names[3] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
  };

  AForm* (*forms[3])(const std::string&) = {
    createShrubbery,
    createRobotomy,
    createPresidential
};

  for (int i = 0; i < 3; i++)
  {
    if (formName == names[i])
    {
      std::cout << "Intern creates " << formName << std::endl;
      return forms[i](target);
    }
  }
  std::cout << "Intern could not create form: " << formName << std::endl;
  return NULL;
}
