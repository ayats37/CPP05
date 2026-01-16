/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taya <taya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:54:30 by taya              #+#    #+#             */
/*   Updated: 2026/01/16 13:01:59 by taya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
  private:
      std::string target;
  public:
      RobotomyRequestForm();
      RobotomyRequestForm(const std::string& target);
      RobotomyRequestForm(const RobotomyRequestForm& other);
      RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
      ~RobotomyRequestForm();
  
      void executeAction() const;
  };
  
#endif