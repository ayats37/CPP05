/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:24:41 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 13:47:05 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default"){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :  AForm("ShrubberyCreationForm", 145, 137) , target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :  AForm(other), target(other.target){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
  if (this != &other)
  {
    this->target = other.target;
    AForm::operator=(other);
  }
  return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::executeAction() const{
   std::ofstream out((target + "_shrubbery").c_str());
   if (!out)
   {
      std::cout << "Error: could not create file " << target << "_shrubbery" << std::endl;
      return;
   }
   out <<
            "       _-_\n"
            "    /~~   ~~\\\n"
            " /~~         ~~\\\n"
            "{               }\n"
            " \\  _-     -_  /\n"
            "   ~  \\\\ //  ~\n"
            "_- -   | | _- _\n"
            "  _ -  | |   -_\n"
            "      // \\\\\n";
   out.close();
}