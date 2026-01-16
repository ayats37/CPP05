/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:34:48 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 13:14:54 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Default"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :  AForm("PresidentialPardonForm", 25, 5) , target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :  AForm(other), target(other.target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
  if (this != &other)
  {
    this->target = other.target;
    AForm::operator=(other);
  }
  return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::executeAction() const{
  std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}



