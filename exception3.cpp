#include<iostream>
using namespace std;
int main()
{
	int p,c,m,err=0;
	string name;

	do
	{
		try //using try block to check error;
		{
			cout<<"Enter sudentname : ";
			cin>>name;
			cout<<"Enter physics marks : ";
			cin>>p;

			if(!(p>=0 && p<=100)) //checking that marks entered is valid or not;
			{
				throw(p); //using throw block to transfer error to catch block;
			}
			cout<<"Enter chemistry marks : ";
			cin>>c;

			if(!(c>=0 && c<=100)) //checking that marks entered is valid or not;
			{
				throw(c); //using throw block to transfer error to catch block;
			}

			cout<<"Enter mathsmarks : ";
			cin>>m;

			if(!(m>=0 && m<=100)) //checking that marks entered is valid or not;
			{
				throw(m); //using throw block to transfer error to catch block;
			}
			err=0; //if all the conditions are false then value of error variable is 0
		}
		catch(int e)
		{
			cout<<"Invalid Marks"<<endl; //Showing error;
			err=1; //Changing value of variable to retke input;
		}

	}while(err); //it takes input until all inputs are valid;
}
