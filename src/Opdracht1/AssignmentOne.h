#pragma once
#include <string>
#include<iostream>
#include<algorithm>
#include "../Assignment.h"
#include "Teacher.h"
#include "Module.h"
#include "Student.h"

using namespace std;

namespace NSAssignmentOne {
	class AssignmentOne : public Assignment
	{
	public:
		AssignmentOne();
		~AssignmentOne() {}

		void setup() override {}
		void update() override {}
		void draw() override {}

		void printModules();
		void printECTotal();


	private:
		vector<Student*> students;
		vector<Teacher*> teachers;
		vector<Module*> modules;
	};
}

