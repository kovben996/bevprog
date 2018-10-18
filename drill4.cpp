#include "std_lib_facilities.h"

int main()
{
	double num;
	double sum=0;
	string unit;
	vector <double> values;

	while (cin >> num >> unit)
	{

		if(unit == "m")
		{
			num = num;
		}

		else if(unit == "cm")
		{
			num = num/100;
		}
		else if(unit == "in")
		{
			num = num*0.3048;
		}
		else if(unit == "ft")
		{
			num=num*0.0254;
		}
		else 
		{
			cout << "Illegal representations of units";
		}
		values.push_back(num);
		sum +=num;
	}

	double min=0;
	for(int i=0; i<values.size();++i)
	{
		if(values[i]<values[min])
		{
			min=i;
		}
	}

	double max=0;
	for(int i=0; i<values.size();++i)
	{
		if(values[i]>values[max])
		{
			max=i;
		}
	}
	
	sort(values);
	cout << "The values: ";

	for (int i=0; i<values.size();++i)
		cout << values[i] << "m, ";
	cout<< "The sum: " <<sum<<" m\n";
	cout<< "The largest value: "<<values[max]<<" m\n";
	cout<< "The smallest value: "<<values[min]<<" m\n";
	return 0;
}