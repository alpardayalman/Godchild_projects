/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 23:58:00 by ardayalman        #+#    #+#             */
/*   Updated: 2023/01/16 00:18:21 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Godchild.hpp"
#include "App.hpp"

using namespace std;
int main()
{
	vector<Godchild> persons;
	App a;
	persons = take_input_from_csv("data.csv");
	a.main_menu(persons);
	return (0);
}