/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:27:01 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 12:31:40 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TI = av[1] = string with the equation.
// R = Solution with the 4 areas that need to be covered.
// Will run ft_solve() and do neccessary error checking.
#include <iostream>
#include "computorV1.hpp"

using namespace std;

int main(int ac, char** av)
{
    ft_solve(av[1]);
    return(0);
}