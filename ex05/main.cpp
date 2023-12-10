/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 22:38:21 by imontero          #+#    #+#             */
/*   Updated: 2023/12/10 22:42:16 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//Chose between "DEBUG", "INFO", "WARNING", "ERROR"
int	main(void)
{
	Harl	inst;

	inst.complain("DEBUG");
	inst.complain("INFO");
	inst.complain("WARNING");
	inst.complain("ERROR");
	return (0);
}