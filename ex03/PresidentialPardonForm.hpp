/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:02:19 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 13:46:59 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
  private:
      std::string target;
  public:
      PresidentialPardonForm();
      PresidentialPardonForm(const std::string& target);
      PresidentialPardonForm(const PresidentialPardonForm& other);
      PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
      ~PresidentialPardonForm();
  
      void executeAction() const;
  };
  
#endif