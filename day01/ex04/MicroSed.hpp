/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MicroSed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:00:34 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 21:24:13 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>

class MicroSed
{
private:
public:
	MicroSed();
	~MicroSed();
	int Replace(std::string SourceFile, std::string SearchStr, std::string ReplaceStr);
};

#endif