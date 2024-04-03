/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:42:46 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 16:42:46 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

class easyfind
{
	public:
		class NotFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
