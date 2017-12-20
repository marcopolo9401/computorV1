/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computorV1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 19:58:48 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 15:15:44 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorV1"

term::term()
{
        this->co = false;
        this->var = false;
        this->equ = false;
        this->zero = false;
        this->deg - false;

        this->degVal = 0;
        this->coVal = 0;
        this->zeroVal = 0;
        this->varVal = 'q';
        this->equVal = 'q';
}

term::term(term& temp)
{
        temp.co = this->co;
        temp.var = this->var;
        temp.equ = this->equ;
        temp.zero = this->zero;
        temp.deg = this->deg;

        temp.degVal = this->degVal;
        temp.coVal = this->coVal;
        temp.zeroVal = this->zeroVal;
        temp.varVal = this->varVal;
        temp.equVal = this->equVal;
        return (temp);
}

term::~term()
{
        
}