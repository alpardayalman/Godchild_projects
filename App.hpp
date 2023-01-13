/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   App.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardayalman <ardayalman@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 03:11:03 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/13 05:51:04 by ardayalman       ###   ########.fr       */
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
		void	go_exit( void );
		void	main_menu();
		int	help_menu();
		int	spreadsheet_menu();
		int	add_user_menu();
		int	search_user_menu();
		int	exit_menu();
};


