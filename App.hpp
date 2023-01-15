/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacikgoz <tacikgoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:11:03 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/15 07:32:04 by tacikgoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
// #include <curses.h>
#define BACKGROUND_COLOR 40

using namespace std;
class App
{
	public:
		int		getNumInput();
		string	getStringInput();
		void	go_help( void );
		void	go_spreadsheet( void );
		void	go_add_user( void );
		void	go_search_user( void );
		void	go_exit( void );
		void	main_menu();
		int	help_menu();
		int	spreadsheet_menu();
		int	add_user_menu();
		int	search_user_menu();
		int	exit_menu();
};

//filename for fd func
string filename("data.csv");