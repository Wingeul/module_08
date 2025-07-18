/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eazyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:21:45 by paul              #+#    #+#             */
/*   Updated: 2025/07/18 15:31:55 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EAZYFIND_HPP
#define EAZYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator eazyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
    {
        throw std::runtime_error("Value not found in the container");
    }
    return it;
}

#endif