#include <iostream>
using namespace std;

class Student
{
	private: 
	int schoolid;
	string studname;
	int mks1,mks2,mks3;
	
	public:
	Student()	
	{
		cout<<"Default constr"<<endl;
	}
	
	Student(int schoolid, string studname, int mks1, int mks2, int mks3)
	{
		cout<<"Parameter constr"<<endl;
		this->schoolid=schoolid;
		this->studname=studname;
		this->mks1=mks1;
		this->mks2=mks2;
		this->mks3=mks3;
		
	}
	
	void display()
	{
		cout<<"Schoolid : "<<this->schoolid<<endl;
		cout<<"Studname : "<<this->studname<<endl;	
		cout<<"Marks  : "<<this->mks1<<" "<<this->mks2<<" "<<this->mks3<<endl;
	}
	void percentage()
	{
		int total,percent;
		total = mks1+mks2+mks3;
		percent = ((total*100)/300);
		cout<<"Percentage = "<<percent<<endl;	
	}
};

int main() 
{
	Student s1(101,"Sam",65,85,95);
	s1.display();
	s1.percentage();
	
	return 0;
}
