/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 11:41:50 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/17 19:07:42 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
Contact::Contact(void) 
{
	this->index = -1;
	this->fn = "";
	this->ln = "";
	this->nm = "";
	this->pn = "";
	this->ds = "";
}

Contact::Contact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds)
{
	this->index = (Contact::sindex % 8);
	this->fn = fn;
	this->ln = ln;
	this->nm = nm;
	this->pn = pn;
	this->ds = ds;
	Contact::sindex++;
}

std::string Contact::get_fn() const
{
	return (this->fn);
}

std::string Contact::get_ln() const
{
	return (this->ln);
}

std::string Contact::get_nm() const
{
	return (this->nm);
}

std::string Contact::get_pn() const
{
	return (this->pn);
}

std::string Contact::get_ds() const
{
	return (this->ds);
}

int Contact::get_sindex() const
{
	return (Contact::sindex);
}

int Contact::get_index() const
{
	return (this->index);
}
int Contact::sindex = 0;
