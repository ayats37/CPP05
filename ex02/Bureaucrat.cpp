/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:04:38 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:41:00 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade){
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
  if (this != &other)
  {
    this->grade = other.grade;
  }
  return *this;
}

Bureaucrat::~Bureaucrat(){}

const std::string& Bureaucrat::getName() const
{
  return (name);
}

int  Bureaucrat::getGrade() const
{
  return (grade);
}

void  Bureaucrat::incrementGrade()
{
  if (grade <= 1)
    throw GradeTooHighException();
  grade--;
}
void  Bureaucrat::decrementGrade()
{
  if (grade >= 150)
    throw GradeTooLowException();
  grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
  return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
  return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}

void  Bureaucrat::signForm(AForm &f)
{
  try
  {
    f.beSigned(*this);
    std::cout << this->getName() << " signed " << f.getName() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cout << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;  
  }
}

void Bureaucrat::executeForm(AForm const & form) const
{
  try
  {
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;  
  }
  
}
