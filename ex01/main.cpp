/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:57:24 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 15:19:17 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
  Bureaucrat a("aya", 30);
  std::cout << a << std::endl;
  Bureaucrat b("ptipana", 5);
  std::cout << b << std::endl;
  Bureaucrat f("aaaaayaaaa", 1);
  std::cout << f << std::endl;
  Bureaucrat h("ptipanaaaaaaaa", 2);
  std::cout << h << std::endl;

  Form c("fifi", 10, 40);
  std::cout << c << std::endl;
  Form d("fofo", 80, 8);
  std::cout << d << std::endl;
  Form g("fofo", 1, 6);
  std::cout << g << std::endl;
  

  a.signForm(c);
  a.signForm(d);
  b.signForm(c);
  b.signForm(d);
  f.signForm(g);
  h.signForm(g);


  return 0;
}