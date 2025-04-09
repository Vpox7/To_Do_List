#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>
#include<limits>

using namespace std;
class TaskManagement {
public:vector<string>Vtask;
public:string task;
public:



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
			
			  return - 1;
		  }
		  
		  
		  
		  else
		  return Input;



	  }

	  void Edit_Task() {
		  if (Vtask.empty()) {

			  cout << "Task List is Empty" << endl;
			  return;
		  }
		  Display_Task();
		
		  cout << "Enter the Number to Edit the Task" << endl;
		  int Num;
		  cin >> Num;
		 if(cin.fail())
		  {
			 cin.clear();
			  cin.ignore();
			  
		  }
		 cout << "Enter the Changed Task" << endl;
		 string Task;
		 cin >> Task;
		 if (cin.fail()) {
			 cin.ignore();
			 cin.clear();
		 }
		 Vtask[Num-1] = Task;




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
			  
			  Add_Task();
			  break;
		  case 2:
			
			  Display_Task();
			  Remove_Task();
			  break;
		  case 3:
			
			  Display_Task();
			  break;
		  case 4:
			
			  Edit_Task();
			  break;
		  
		  case 5:
			 

			  break;

		  default:
			  cout << "Enter valied Number" << endl;
			  break;
		  }



		  return 0;


	  }
	  void Remove_Task() {
		  if (Vtask.empty()) {
			  cout << "Empty List" << endl;
			  return;
		}
		  int c = 0;
		  cout << "Enter the number to remove:" << endl;
		  int num;
		  cin >> num;
		  if (cin.fail()) {
			  cin.clear();
			  cin.ignore();
		  }
		  else if(num >0 &&num <=Vtask.size()) {
			  Vtask.erase(Vtask.begin() + num - 1);
			  cout << "REMOVED SUCCESSFUL!" << endl;
			  for (auto i : Vtask) {
				  cout << ++c << ") " << i << endl;
			  }

		  }
	  }






	  void DisplayOptions() {


		  cout << "********************TO DO LIST OPTIONS***********************" << endl;
		  cout << "1)Add the task" << endl;
		  cout << "2)Remove the task" << endl;
		  cout << "3)Display the task" << endl;
		  cout << "4)Edits as Done" << endl;
	
		  cout << "5)Exit" << endl;
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