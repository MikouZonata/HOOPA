#pragma once
#include<string>

using namespace std;

namespace NSAssignmentOne {
	class Student
	{
	public:
		Student();
		Student(string name);

		string name;
		int ec;

		~Student();
	};
}