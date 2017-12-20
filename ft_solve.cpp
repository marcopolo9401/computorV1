/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:27:08 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 12:31:40 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// TI = av[1]
// R = Display of solution
// Solve the equation in three steps, Read In, Calculate and Solve.

#include "computorV1.hpp"
#include <string>

using namespace std;

void ft_solve(string equ)
{
    vector<term> terms;
    ft_readIn(equ, terms);
    foreach (term, terms, term++){
        cout << term << endl;
    }
    // ft_calc(terms);
    // ft_display(terms);
}