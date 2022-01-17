#include<iostream>
using namespace std;

class Student{
	private:
	int NumberOfSubjects = 3;
	int MarksPerSubject = 100;
	int TMax = NumberOfSubjects * MarksPerSubject;

	public:
	string Sname;
	int Marks[10];
	int TotalMarks = 0;
	float AverageMarks = 0;

	//Setters for private members
	void setNumberOfSubjects(int n){
		NumberOfSubjects = n;
		TMax = NumberOfSubjects * MarksPerSubject;
	}

	void setMarksPerSubject(int n){
		MarksPerSubject = n;
		TMax = NumberOfSubjects * MarksPerSubject;
	}

	void assign(string name, int arr[]){
		Sname = name;
		for(int i = 0; i < NumberOfSubjects; i++){
			Marks[i] = arr[i];
		}
		return;
	}

	void compute(){
		for(int i = 0; i < NumberOfSubjects; i++){
			TotalMarks += Marks[i];
		}
		AverageMarks = TotalMarks * 1.0 / NumberOfSubjects;
		return;
	}

	void display(){
		cout<<"Name - "<<Sname<<endl;
		cout<<"Marks in "<<NumberOfSubjects<<" Subjects, Out of "<<MarksPerSubject<<endl;
		for(int i = 0; i < NumberOfSubjects; i++){
			cout<<Marks[i]<<"\t";
		}
		cout<<endl<<"Total Marks "<<TotalMarks<<" Out of "<<TMax<<endl;
		cout<<"Average Marks - "<<AverageMarks;
	}
};

int main(){
	Student Aryan;
	int arr[3] = {80,90,95};
	Aryan.assign("Aryan", arr);
	Aryan.compute();
	Aryan.display();
}
 