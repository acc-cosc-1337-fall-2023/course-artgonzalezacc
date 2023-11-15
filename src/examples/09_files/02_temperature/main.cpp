#include "temperature_data.h"
#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main() 
{
	vector<Temperature> temps {Temperature(1, 99.1), Temperature(2, 98.5), Temperature(3, 100.5)};

	TemperatureData data;

	data.save_temps(temps);
	
	vector<Temperature> read_temps;
	read_temps = data.get_temps();

	for(auto temp: read_temps)
	{
		cout<<temp.get_hour()<<" "<<temp.get_reading()<<"\n";
	}

	return 0;
}