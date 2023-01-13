/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Godchild.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 00:05:09 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/13 04:36:40 by ardayalman       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Godchild.hpp"

Godchild::Godchild()
{
	this->_id = 0;
	this->_name = "Default";
	this->_surname = "Default";
}

Godchild::Godchild(int _id, string _name, string _surname)
{
	this->_id = _id;
	this->_name = _name;
	this->_surname = _surname;
}

Godchild::Godchild(Godchild &obj)
{
	this->_id = obj.get_id();
	this->_name = obj.get_name();
	this->_surname = obj.get_surname();
}

// destructor.
Godchild::~Godchild()
{
	cout << "Destructor is called" << endl;
}

// id.
int		Godchild::get_id( void ) const
{
	return (this->_id);
}
void	Godchild::set_id( int id )
{
	this->_id = id;
}

// name.
string	Godchild::get_name( void ) const
{
	return (this->_name);
}
void	Godchild::set_name( string name )
{
	this->_name = name;
}
// surname.
string	Godchild::get_surname( void ) const
{
	return (this->_surname);
}
void	Godchild::set_surname( string surname)
{
	this->_surname = surname;
}
// open spreadsheet.

// call it with ostream.
ostream &operator<<(ostream &os, const Godchild &obj)
{
	os << "name: " << obj._name << "\nsurname: " << obj._surname << "\nid: " << obj._id << endl;
	return (os);
}

