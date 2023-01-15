#ifndef FILE_IN_OUT_HPP
#define FILE_IN_OUT_HPP

#include "App.hpp"

using namespace std;

class person
{
	public:
		vector<string> notes;
		string  _notes_combiner_(vector<string>);
};

//FUNC
vector<person>  take_input_from_csv();
void            set_data_to_csv(vector<person>& persons);
#endif