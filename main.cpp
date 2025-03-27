#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

string Add_Task() {

	return 0;

}
int User_Input() {

	int Input;
	cin >> Input;
	return Input;


}

int DisplayOptions() {


	cout << "********************TO DO LIST OPTIONS***********************" << endl;
	cout << "1)Add the task" << endl;
	cout << "2)Remove the task" << endl;
	cout << "3)Display the task" << endl;
	cout << "4)Edits as Done" << endl;
	cout << "5)Marks as done " << endl;
	cout << "6)Exit" << endl;
	cout << "*************************************************************" << endl;
	cout << "Enter Your Chocie" << endl;
	return User_Input();
}



int main() {
	
	
	while (DisplayOptions()!=6)
	{
		DisplayOptions();
	}


	
	
	

	return 0;
}