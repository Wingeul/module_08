/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:24:16 by paul              #+#    #+#             */
/*   Updated: 2025/07/18 15:35:16 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <stdexcept>
#include "eazyfind.hpp"

int main()
{
    try
    {
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        lst.push_back(4);
        lst.push_back(5);

        int valueToFind = 3;
        std::list<int>::iterator it = eazyfind(lst, valueToFind);
        std::cout << "Value " << valueToFind << " found." << std::endl;

        valueToFind = 6;
        it = eazyfind(lst, valueToFind);
        std::cout << "Value " << valueToFind << " found." << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
