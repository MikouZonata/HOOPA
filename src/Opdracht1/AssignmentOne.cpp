#include "AssignmentOne.h"

namespace NSAssignmentOne {
	AssignmentOne::AssignmentOne() {
		students.push_back(new Student("Kevin"));
		students.push_back(new Student("Maan"));
		students.push_back(new Student("Mike"));
		students.push_back(new Student("Esmee"));
		students.push_back(new Student("Josien"));
		students.push_back(new Student("Anne"));
		students.push_back(new Student("Tim"));
		students.push_back(new Student("Bram"));
		students.push_back(new Student("Joop"));
		students.push_back(new Student("Maaike"));

		Teacher* teacherEdwin = new Teacher("Edwin");
		Teacher* teacherMicah = new Teacher("Micah");
		Teacher* teacherMeindert = new Teacher("Meindert");
		teachers = vector<Teacher*>{ teacherEdwin, teacherMicah, teacherMeindert };

		vector<Student*> hoopaStudents{ students[0], students[1], students[2], students[5], students[7] };
		modules.push_back(new Module("HOOPA", 2, teachers[0], hoopaStudents));

		vector<Student*> gameDesignStudents{ students[0], students[2], students[3], students[5], students[8], students[9] };
		modules.push_back(new Module("GameDesign", 4, teachers[1], gameDesignStudents));

		vector<Student*> levelDesignStudents{ students[1], students[3], students[4], students[6], students[7], students[9] };
		modules.push_back(new Module("LevelDesign", 8, teachers[2], levelDesignStudents));

		//Print alle modules met bijbehorende docent en studenten.
		cout << "\nPrinting list of modules. \n ======== \n";
		printModules();
		//Print de totale EC van alle studenten.
		cout << "\nPrinting total EC acquired by students. \n ======== \n";
		printECTotal();

		//Wijzig de EC van 1 module en print opnieuw.
		cout << "\nEC for module GameDesign was changed from 4 to 7. Reprinting. \n ======== \n";
		modules[1]->ec = 7;
		printECTotal();

		//Verwijder student uit een module en toon opnieuw lijst van modules.
		cout << "\nStudent number 3 (Josien) was removed from Module 2 (Level Design). Reprinting list of modules. \n ======== \n";
		modules[2]->students.erase(modules[2]->students.begin() + 2, modules[2]->students.begin() + 3);
		printModules();
	}

	void AssignmentOne::printModules() {
		for (int i = 0; i < modules.size(); i++) {
			cout << "Printing Module " << i << ": " << modules[i]->name << ".\n";
			cout << "Module Teacher: " << modules[i]->teacher->name << ".\n";
			cout << "Enrolled students: \n";
			for (Student* s : modules[i]->students) {
				cout << s->name << "\n";
			}
			cout << "\n";
		}
	}

	void AssignmentOne::printECTotal() {
		cout << "Printing EC Total.\n";
		for (Student* s : students) {
			int ecTotal = 0;
			for (Module* m : modules) {
				if (find(m->students.begin(), m->students.end(), s) != m->students.end()) {
					ecTotal += m->ec;
				}
			}
			cout << "Student " << s->name << " has acquired " << ecTotal << ".\n\n";
		}
	}

	AssignmentOne::~AssignmentOne() {

	}
}