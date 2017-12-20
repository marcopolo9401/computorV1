/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 21:51:55 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/08 22:32:04 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TI = Nothing
// R = Push_back temp, create new one and make it -

#include "computorV1"

using namespace std;

term ft_minus(void)
{
    term temp;
    temp.opVal = '-';
    temp.neg = true;
    return (temp);
}