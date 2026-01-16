/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:57:24 by taya              #+#    #+#             */
/*   Updated: 2026/01/15 12:14:52 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
  std::cout << "----- valid grade -----" << std::endl;
  try
  {
    Bureaucrat a("aya", 42);
    std::cout << a << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
  
  std::cout << "\n----- grade too high -----" << std::endl;
  try
  {
    Bureaucrat b("aayaa", 0);
    std::cout << b << std::endl;
  }
  
  catch(const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
  
  std::cout << "\n----- grade too low -----" << std::endl;
  try
  {
    Bureaucrat c("ptipana", 300);
    std::cout << c << std::endl;
  }
  
  catch(const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
  
  std::cout << "\n-----increment grade -----" << std::endl;
  try
  {
    Bureaucrat d("ptipanaaaa", 2);
    d.incrementGrade();
    std::cout << d << std::endl;
    d.incrementGrade();
    std::cout << d << std::endl;
  }
  
  catch(const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
  
  std::cout << "\n----- decrement grade -----" << std::endl;
  try
  {
    Bureaucrat f("touirass", 149);
    f.decrementGrade();
    std::cout << f << std::endl;
    f.decrementGrade();
    std::cout << f << std::endl;
  }
  
  catch(const std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }
  return 0;
}