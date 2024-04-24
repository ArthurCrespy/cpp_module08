/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acrespy <acrespy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:20:49 by acrespy           #+#    #+#             */
/*   Updated: 2024/04/03 17:24:44 by acrespy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _N(N), _size(0)
{
	_array.reserve(N);
}

Span::Span(Span const &src)
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_size = rhs._size;
		_array = rhs._array;
	}
	return (*this);
}

Span::~Span(void) {}

void Span::addNumber(int nb)
{
	if (_size >= _N)
		throw Span::SpanFull();
	_array.push_back(nb);
	_size++;
}

size_t Span::shortestSpan(void)
{
	size_t min;
	std::vector<int> array_tmp;

	if (_size <= 1)
		throw Span::SpanShort();
	array_tmp = _array;
	std::sort(array_tmp.begin(), array_tmp.end());
	min = array_tmp[1] - array_tmp[0];
	for (unsigned int i = 1; i < _size - 1; i++)
	{
		if (array_tmp[i + 1] - array_tmp[i] < (int)min)
			min = array_tmp[i + 1] - array_tmp[i];
	}
	return (min);
}

size_t Span::longestSpan(void)
{
	std::vector<int> array_tmp;

	if (_size <= 1)
		throw Span::SpanShort();
	array_tmp = _array;
	std::sort(array_tmp.begin(), array_tmp.end());
	return (array_tmp[_size - 1] - array_tmp[0]);
}

void Span::fillArray(void)
{
	std::srand(std::time(0));
	for (unsigned int i = 0; i < _N; i++)
		Span::addNumber(std::rand());
}

const char *Span::SpanFull::what() const throw()
{
	return ("Error: span is full");
}

const char *Span::SpanShort::what() const throw()
{
	return ("Error: span is too short");
}

