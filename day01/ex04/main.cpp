/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:37:13 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 21:24:48 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MicroSed.hpp"

int	main(int argc, char **argv)
{
	
	if (argc == 4)
	{
		MicroSed sed;
		return sed.Replace(argv[1], argv[2], argv[3]);
	}
	else
		std::cout << "Usage: ./sedd <source_file> <string_for_search> <string_for_replace>" << std::endl;
	return 1;
}