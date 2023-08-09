#include <iostream>
using namespace std;

class Task{
	private:
		string title;
		string description;
	protected:
		Task(std::string title, std::string description);
		~Task();		
		void setTitle(string title);
		string getTitle();
		void setDescription(string description);
		string getDescription();
		bool isCompleted();
		void markAsCompleted();
};
