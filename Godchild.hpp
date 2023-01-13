#pragma once
#include <iostream>
#include <string>

using namespace std;
class Godchild
{
	private:
		int	_id;
		string _name;
		string _surname;
	public:
		Godchild();//default constructor
		Godchild(int _id, string _name, string _surname);// Parameterized Constructor
		Godchild(Godchild &obj);// copy constructor.
		~Godchild();//destructor
		int		get_id( void ) const ;
		void	set_id( int id );
		string	get_name( void ) const ;
		void	set_name( string name );
		string	get_surname( void ) const;
		void	set_surname( string surname);
		friend	ostream &operator<<(ostream &os, const Godchild &obj); // friend fonksiyonlarin direk private'lara ulasmasini sagliyor.
};

