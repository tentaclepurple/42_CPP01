/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 15:01:03 by imontero          #+#    #+#             */
/*   Updated: 2023/12/10 15:11:28 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	
}

void	Harl::_debug(void)
{
	std::cout << "Debug messages contain contextual information. They are mostly used for problem diagnosis" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "Info messages contain information about the progress of the application at coarse-grained level" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "Warning messages are used to indicate that something unexpected happened, but the application will continue to run" << std::endl;
}
