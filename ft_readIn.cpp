/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readIn.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:26:47 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 12:31:40 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// TI = av[1] and reference to vector.
// R = A vector complete with all values needed in the calulation.
// Will cycle through the string and for each value that it encounters, it will edit
// the temp object and push_back values when they are ready.
#include "computorV1.hpp"
#include <string>
#include <ctype.h>

#include <iostream>

using namespace std;

void ft_readIn(string equ, term& temp)
{
    term box;
    for(string::iterator x = equ.begin(); x != equ.end(); ++x){
        if (isalpha(x)){
            ft_alpha(x, box);
        }else if (isdigit(x)){
            ft_digit(x, box);
        }else if(x == '+'){
            temp.push_back(box);
            box = ft_plus();
        }else if(x == '-' && box.exp == true){
            temp.push_back(box);
            box = ft_minus();
        }else if(x == '*'){
            x+=2;
            ft_mult(x, box);
        }else if(x == '='){
            temp.push_back(box);
            box = ft_equals();
            temp.push_back(box);
            box.wipe();
        }else if((x+1) == equ.end()){
            temp.push_back(box);
            box.~term();
            
        }
    }
}

int main()
{
    vector<term> terms;
    string str = "2 * X^2 + 2 * X^1 = 6 * X^0"
    ft_readIn(str, terms);
    return (0);
}