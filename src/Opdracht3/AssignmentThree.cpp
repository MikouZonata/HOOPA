#include"AssignmentThree.h"

namespace NSAssignmentThree {
	AssignmentThree::AssignmentThree() {
		boys.push_back(new Elf("Orlando Bloom", new SoldierRole()));
		boys.push_back(new Elf("Johnny Depp", new FarmerRole()));
		boys.push_back(new Elf("Jim Carrey", new ShamanRole()));
		boys.push_back(new Orc("Bas Boomhakker", new SoldierRole()));
		boys.push_back(new Orc("Harald Hark", new ShamanRole()));
		boys.push_back(new Orc("Pim Pruimplukker", new FarmerRole()));

		for (Boy* b : boys)
			b->render();
	}

	AssignmentThree::~AssignmentThree() {
		for (Boy* b : boys) {
			delete b;
		}
	}
}