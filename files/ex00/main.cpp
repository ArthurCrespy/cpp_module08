/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:43:05 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 16:43:07 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

#include <vector>
// #include <array>
#include <list>

int main(void)
{
//	std::array<int, 5> arr = {1, 2, 3, 4, 5};
//	try
//	{
//		int it = easyfind(arr, 4);
//		std::cout << "Value 4 found at index " << it << " in array.\n";
//	}
//	catch (const std::exception &e)
//	{
//		std::cerr << "Exception caught: " << e.what() << std::endl;
//	}

	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	try
	{
		int it = easyfind(vec, 3);
		std::cout << "Value 3 found at index " << it << " in vector.\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	lst.push_back(50);
	try
	{
		int it = easyfind(lst, 25);
		std::cout << "Value 25 found at index " << it << " in list.\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
