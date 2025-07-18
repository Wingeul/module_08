/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:36:43 by paul              #+#    #+#             */
/*   Updated: 2025/07/18 15:38:26 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <stdexcept>
#include <algorithm>
class Span
{
private:
    unsigned int _size;
    unsigned int _count;
    int *_array;
public:
    Span(unsigned int size);
    Span(const Span &other);
    ~Span();
    Span &operator=(const Span &other);

    void addNumber(int number);
    int shortestSpan() const;
    int longestSpan() const;

    unsigned int getSize() const;
    unsigned int getCount() const;
};

#endif