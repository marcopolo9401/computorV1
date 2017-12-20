/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plus.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 21:43:40 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/08 22:32:04 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorV1"

using namespace std;

term ft_plus(void){
    term temp;
    temp.opVal = '+';
    temp.neg = false;
    return(temp);
}