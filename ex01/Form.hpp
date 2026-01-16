/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:16:58 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:34:23 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form{
  private :
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;
  public :
    Form();
    Form(const std::string& name, int gradeToSign,int gradeToExecute );
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
    
    const std::string& getName() const;
    bool  getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& b);

    class GradeTooHighException : public std::exception {
      public:
          virtual const char* what() const throw();
      };
      
      class GradeTooLowException : public std::exception {
      public:
          virtual const char* what() const throw();
      };
    
};
std::ostream& operator<<(std::ostream& os, const Form& f);

#endif