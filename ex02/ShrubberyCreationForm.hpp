/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:56:25 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 13:38:01 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm : public AForm {
  private:
      std::string target;
  public:
      ShrubberyCreationForm();
      ShrubberyCreationForm(const std::string& target);
      ShrubberyCreationForm(const ShrubberyCreationForm& other);
      ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
      ~ShrubberyCreationForm();
  
      void executeAction() const;
  };
  
#endif