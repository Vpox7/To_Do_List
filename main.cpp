#include<iostream>
#include<vector>
#include<string.h>

using namespace std;
class TaskManagement {
public:vector<string>Vtask;
public:string task;


	  void Add_Task() {
		 cout << "Enter the task" << endl;
		 cin.ignore();
		  getline(cin, task);
		 
		  Vtask.push_back(task);


	  }
	  int User_Input() {

		  int Input;
		  cout << "Enter Your Chocie" << endl;
		 
		  cin >> Input;
		
		  if (cin.fail()) {
			  cin.clear();
			  //cin.ignore(numeric_limits<streamsize>::max(),'\n');
			  return - 1;
		  }
		  
		  
		  
		  else
		  return Input;



	  }

	  void Display_Task() {
		  int c = 0;
		  cout << "******************TASK LIST**************************" << endl;
		  if (Vtask.empty()) {
			  cout << "THE LIST IS EMPTY" << endl;
		  }


		  for (const string& Vt : Vtask)
		  {
			
			  cout <<++c<<") "<< Vt << endl;
		  }







	  }
	  int UserChoice(int x) {

		  switch (x)
		  {
		  case 1:
			  cout << "1 IS the choice" << endl;
			  Add_Task();
			  break;
		  case 2:
			  cout << "2 IS the choice" << endl;

			  break;
		  case 3:
			  cout << "3 IS the choice" << endl;
			  Display_Task();
			  break;
		  case 4:
			  cout << "4 IS the choice" << endl;

			  break;
		  case 5:
			  cout << "5 IS the choice" << endl;

			  break;
		  case 6:
			  cout << "6 IS the choice" << endl;

			  break;

		  default:
			  break;
		  }



		  return 0;


	  }



	  void DisplayOptions() {


		  cout << "********************TO DO LIST OPTIONS***********************" << endl;
		  cout << "1)Add the task" << endl;
		  cout << "2)Remove the task" << endl;
		  cout << "3)Display the task" << endl;
		  cout << "4)Edits as Done" << endl;
		  cout << "5)Marks as done " << endl;
		  cout << "6)Exit" << endl;
		  cout << "*************************************************************" << endl;




	  }

};

int main() {

	TaskManagement TaskMagement;

	TaskMagement.DisplayOptions();
	int UI;
	
	
	while((UI = TaskMagement.User_Input())!=6)
	{
		if (UI == -1) {
			cout << "Enter Valied Number" << endl;
			break;
		}

		TaskMagement.UserChoice(UI);
		TaskMagement.DisplayOptions();

	}
	

	return 0;
	
	


	
};