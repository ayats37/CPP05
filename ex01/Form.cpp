/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:17:01 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:34:35 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() : name("Defualt"), isSigned(false), gradeToSign(150), gradeToExecute(150){}

Form::Form(const std::string& name, int gradeToSign,int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
  if (gradeToSign < 1 || gradeToExecute < 1)
    throw GradeTooHighException();
  if (gradeToSign > 150 ||  gradeToExecute > 150)
    throw GradeTooLowException();
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){}

Form& Form::operator=(const Form& other)
{
  if (this != &other)
  {
    this->isSigned = other.isSigned;
  }
  return *this;
}

Form::~Form(){}

const std::string& Form::getName() const{
  return name;
}

bool  Form::getSigned() const
{
  return isSigned;
}

int Form::getGradeToSign() const
{
  return gradeToSign;
}

int Form::getGradeToExecute() const{
  return gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
  if (b.getGrade() <= gradeToSign)
    isSigned = true;
  else
    throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "Form " << f.getName()
       << ", signed: " << (f.getSigned() ? "yes" : "no")
       << ", grade to sign: " << f.getGradeToSign()
       << ", grade to execute: " << f.getGradeToExecute();
    return os;
}
