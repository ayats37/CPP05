/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:17:56 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:48:19 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :  AForm("RobotomyRequestForm", 72, 45) , target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :  AForm(other), target(other.target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
  if (this != &other)
  {
    this->target = other.target;
    AForm::operator=(other);
  }
  return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "* drilling noises *" << std::endl;

    if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}
