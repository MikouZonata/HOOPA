#pragma once
#include <string>
#include<iostream>
#include<algorithm>
#include "Teacher.h"
#include "Module.h"
#include "Student.h"

using namespace std;

namespace NSAssignmentOne {
	class AssignmentOne
	{
	public:
		AssignmentOne();

		void printModules();
		void printECTotal();

		~AssignmentOne();

	private:
		vector<Student*> students;
		vector<Teacher*> teachers;
		vector<Module*> modules;
	};
}

