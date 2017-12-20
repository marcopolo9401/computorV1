/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_equals.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 21:56:57 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/08 22:32:04 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  TI = temp reference
//  R = Push back temp, create new one, make it = to =
//  and push it back too and the create another temp

#include "computorV1"

using namespace std;

term ft_equals(void)
{   
    term temp;
    temp.opVal = '=';
    temp.eq = true;
    return (temp);
}