/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mult.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 22:16:24 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/08 22:32:04 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  TI = the value of av[1][index + 2] (Or just normal idex if handled correctly.)
//  R = the edited temp value accordingly
//  It will store the exponent and change the associated bools.

#include "computorV1"
#include <ctype.h>

using namespace std;

void ft_mult(char c, term& temp)
{
    int x = atoi(c);
    temp.deg = x;
}