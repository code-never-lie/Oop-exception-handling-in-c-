#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw('I'); //Here we input character;
	}
	catch(int e) //This catch takes int value;
	{
		cout<<"Input is Integer value "<<e<<endl;
	}
	catch(double e) //This catch takes double value;
	{
		cout<<"Input is Double value "<<e<<endl;
	}
	catch(char e) //This catch takes character input ;
	{
		cout<<"Input is Character "<<e<<endl;
	}

	return 0;
}
