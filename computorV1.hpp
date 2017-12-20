/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computorV1.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferreir <mferreir@student.42.>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 01:03:27 by mferreir          #+#    #+#             */
/*   Updated: 2017/12/12 15:07:43 by mferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Definition of term class, implementation in computorV1.cpp
#ifndef COMPUTORV1_HPP
#define COMPUTORV1_HPP

#include <iostream>
#include <string>

class term{
    public:
        bool co;
        bool var;
        bool equ;
        bool zero;
        bool deg;

        float degVal;
        float coVal;
        float zeroVal;
        
        char varVal;
        char equVal;

        string reduced;
        string degree;
        string discriminant;
        string solution;

    term();
    term(term& temp);
    ~term();

    term operator=(term& temp)
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
    
    term operator<<(term& temp)
    {
        cout << this->reduced << endl << this->degree <<
        endl << this->discriminant << endl << this->solution << endl;
    }

    term()
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

    term(term& temp)
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

    ~term()
    {

    }
};        

#endif