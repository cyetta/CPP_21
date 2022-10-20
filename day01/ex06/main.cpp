/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:37:13 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/20 16:56:38 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		Harl	harl;
		harl.complain(argv[1]);
		return 0;
	}
	else
		std::cout << "Usage: ./harl <Complain>\n\
Where <Complain> is: \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" \
or \"Something expression\"" << std::endl;
	return 1;
}