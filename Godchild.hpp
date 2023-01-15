#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#define DENOM ";"

using namespace std;
class Godchild
{
	public:
		vector<string> 		notes;
		string  			notes_combiner(vector<string> _note);
		friend	ostream 	&operator<<(ostream &os, const Godchild &obj); // friend fonksiyonlarin direk private'lara ulasmasini sagliyor.
		Godchild(vector<string> new_notes) : notes(new_notes) {}
		Godchild();
		~Godchild();
};
		void    			set_data_to_csv(vector<Godchild>& persons, string filename);
		vector<Godchild>    take_input_from_csv(string filename);

