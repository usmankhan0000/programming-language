#include<iostream>
using namespace std;
//Gradebook class definition
class gradebook
{
	public:
		//function that displays a welcome message to the gradebook user
		void displaymessage()const
		{
			cout<<"Welcome to the Gradebook!"<<endl;
		}//end function display message
};//end class gradebook
// function main begins program execution
int main()
{
	gradebook Salman;
	Salman.displaymessage();
}//end main
