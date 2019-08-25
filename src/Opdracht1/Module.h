#pragma once
#include<string>
#include<vector>
#include "Student.h"
#include "Teacher.h"

using namespace std;

namespace NSAssignmentOne {
	class Module
	{
	public:
		Module(string name, int ec, Teacher* teacher, vector<Student*> students);

		string name;
		int ec;
		vector<Student*> students;
		Teacher *teacher;

		~Module();
	};
}

