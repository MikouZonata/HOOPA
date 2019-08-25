#include "Module.h"

namespace NSAssignmentOne {
	Module::Module(string name, int ec, Teacher* teacher, vector<Student*> students)
	{
		this->name = name;
		this->ec = ec;
		this->teacher = teacher;
		this->students = students;
	}


	Module::~Module()
	{
	}
}