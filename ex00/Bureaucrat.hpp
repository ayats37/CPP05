/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:04:37 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:32:02 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>


class Bureaucrat{
  private :
    const std::string name;
    int grade;
  public :
  Bureaucrat();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& other);
  Bureaucrat& operator=(const Bureaucrat& other);
  ~Bureaucrat();
  
  const std::string& getName() const;
  int  getGrade() const;

  void  incrementGrade();
  void  decrementGrade();

  class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif