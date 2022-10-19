/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MicroSed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:30 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 21:24:14 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "MicroSed.hpp"

MicroSed::MicroSed()
{
}

MicroSed::~MicroSed()
{
}

int MicroSed::Replace(std::string SourceFile, std::string SearchStr, std::string ReplaceStr)
{
	std::ifstream	Source(SourceFile);
	if (!Source.is_open())
	{	std::cerr << "File " << SourceFile << " could not be opened for reading!" << std::endl;
		return 1;
	}
	std::string	OutFileName = SourceFile + ".replace";
	std::ofstream	outFile(OutFileName);
	if (!outFile.is_open())
	{	std::cerr << "File " << OutFileName << " could not be opened for writing!" << std::endl;
		return 2;
	}
	std::string	BufString;
	int	SearchPosition;
	while (std::getline(Source, BufString))
	{
		SearchPosition = BufString.find(SearchStr);
		while(SearchPosition != -1)
		{
			BufString.erase(SearchPosition, SearchStr.length());
			BufString.insert(SearchPosition, ReplaceStr);
			SearchPosition = BufString.find(SearchStr, SearchPosition + SearchStr.length());
		}
		outFile << BufString << std::endl;
	}
	return 0;
}
