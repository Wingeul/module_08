/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:36:43 by paul              #+#    #+#             */
/*   Updated: 2025/10/22 18:38:29 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <string>
#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>
#include <iterator>
#include <climits>

class Span
{
	private:
		std::vector<int> _storage;
		unsigned int _size;
		unsigned int _pos;
		Span();

	public:
		Span(unsigned int N);
		Span(const Span &src);

		~Span();

		Span &operator=(const Span &src);

		void addNumber(int number);
		void addNumber(unsigned int range, time_t seed);
		unsigned int shortestSpan()const;
		unsigned int longestSpan()const;

		unsigned int getSize()const;
		unsigned int getPos()const;

	class	VectorInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ArrayFullException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};

	class	ComparisonInvalidException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};

#endif