/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:20:36 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:42:58 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Defualt"), isSigned(false), gradeToSign(150), gradeToExecute(150){}

AForm::AForm(const std::string& name, int gradeToSign,int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 ||  gradeToExecute > 150)
    throw GradeTooLowException();
}

AForm::AForm(const AForm& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){}

AForm& AForm::operator=(const AForm& other)
{
  if (this != &other)
  {
    this->isSigned = other.isSigned;
  }
  return *this;
}

AForm::~AForm(){}

const std::string& AForm::getName() const{
  return name;
}

bool  AForm::getSigned() const
{
  return isSigned;
}

int AForm::getGradeToSign() const
{
  return gradeToSign;
}

int AForm::getGradeToExecute() const{
  return gradeToExecute;
}

void AForm::beSigned(const Bureaucrat& b)
{
  if (b.getGrade() <= gradeToSign)
    isSigned = true;
  else
    throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade too low!";
}
const char* AForm::FormNotSignedException::what() const throw()
{
    return "AForm is not signed!";
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
    os << "AForm " << f.getName()
       << ", signed: " << (f.getSigned() ? "yes" : "no")
       << ", grade to sign: " << f.getGradeToSign()
       << ", grade to execute: " << f.getGradeToExecute();
    return os;
}

void AForm::execute(Bureaucrat const & executor) const
{
  if (!isSigned)
    throw FormNotSignedException();
  if (executor.getGrade() > gradeToExecute)
    throw GradeTooLowException();
  executeAction();
}

