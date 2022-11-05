/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/04 19:45:13 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include<limits>
#include<cmath>
#include<exception>

int main(int argc, char **argv)
{
	if (argc !=2)
	{
		std::cout << "Error argument!" << std::endl;
		return 1;
	}
	double d;
	std::string str(argv[1]);
	if (str.length() == 1 && !std::isdigit(argv[1][0]))
		d = static_cast<double>(str[0]);	
	else
	{
		try
		{
			d = std::stod(str);
		}
		catch(const std::invalid_argument& ia)
		{
			std::cout << "No recognized numbers or char\nUse: ./convert <number>||<char>" <<std::endl;
			return 1;
		}
		catch(const std::out_of_range& oor)
		{
			std::cerr << "Out of Range error\n"<<"Use: ./convert <number>||<char>\n" << oor.what() << std::endl;
			return 1;
		}
		
	}
	std::cout.precision(1);
	std::cout.setf(std::ios::fixed);

	if (d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity() || std::isnan(d))
			std::cout << "char  : impossible" << std::endl;
	else
	{
		char	c = static_cast<char>(d);
		if (c < 32 || c > 126)
			std::cout << "char  : Non displayable" << std::endl;
		else
			std::cout << "char  : "<< c << std::endl;
	}
	if (d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity() || std::isnan(d))
			std::cout << "int  : impossible" << std::endl;
	else
	{
		int	i = static_cast<int>(d);
		if (d > std::numeric_limits<int>::max()  || d < -std::numeric_limits<int>::max())
			std::cout << "int  : Non displayable" << std::endl;
		else
			std::cout << "int  : "<< i << std::endl;
	}
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
	
	return 0;
}

