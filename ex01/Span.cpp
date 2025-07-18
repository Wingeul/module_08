/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:36:50 by paul              #+#    #+#             */
/*   Updated: 2025/07/18 15:40:02 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits.h>

Span::Span(unsigned int size) : _size(size), _count(0)
{
    if (size == 0)
        throw std::invalid_argument("Size must be greater than zero");
    _array = new int[size];
}

Span::Span(const Span &other) : _size(other._size), _count(other._count)
{
    _array = new int[_size];
    std::copy(other._array, other._array + _count, _array);
}

Span::~Span()
{
    delete[] _array;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        delete[] _array;
        _size = other._size;
        _count = other._count;
        _array = new int[_size];
        std::copy(other._array, other._array + _count, _array);
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (_count >= _size)
        throw std::out_of_range("Span is full");
    _array[_count++] = number;
}

int Span::shortestSpan() const
{
    if (_count < 2)
        throw std::logic_error("Not enough elements to find a span");
    
    int minSpan = INT_MAX;
    for (unsigned int i = 0; i < _count - 1; ++i)
    {
        for (unsigned int j = i + 1; j < _count; ++j)
        {
            int span = abs(_array[i] - _array[j]);
            if (span < minSpan)
                minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if (_count < 2)
        throw std::logic_error("Not enough elements to find a span");
    
    int min = *std::min_element(_array, _array + _count);
    int max = *std::max_element(_array, _array + _count);
    return max - min;
}

unsigned int Span::getSize() const
{
    return _size;
}

unsigned int Span::getCount() const
{
    return _count;
}