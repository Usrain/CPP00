/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malebrun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:18:14 by malebrun          #+#    #+#             */
/*   Updated: 2026/03/17 18:41:22 by malebrun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
class Contact
{
	private:
		static int sindex;
		int index;
		std::string fn;
		std::string ln;
		std::string nm;
		std::string pn;
		std::string ds;
	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds);
		std::string get_fn() const;
		std::string get_ln() const;
		std::string get_nm() const;
		std::string get_pn() const;
		std::string get_ds() const;
		int get_index() const;
		int get_sindex() const;
};
#endif
