/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 19:59:00 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 12:31:40 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  TI = char value of av[1][index] and reference to temp object
//  R = values in temp object will be edited correctly and accordingly.
//  Change the temps bool about it having a variable and store
//  the char to know what variable it is.

#include "computorV1.hpp"

using namespace std;

void ft_alpha(char c, term& temp)
{
    temp.var = true;
    temp.varVal = c;
}