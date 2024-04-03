/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:20:49 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 17:23:54 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int		_N;
		unsigned int		_size;
		std::vector<int>	_array;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);

		Span &operator=(Span const &rhs);

		void	addNumber(int nb);
		int		shortestSpan(void);
		int		longestSpan(void);
		void	fillArray(void);

		class SpanFull : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class SpanShort : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
