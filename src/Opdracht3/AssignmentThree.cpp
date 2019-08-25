#include"AssignmentThree.h"

namespace NSAssignmentThree {
	AssignmentThree::AssignmentThree() {
		boys.push_back(Elf("Orlando Bloom", SoldierRole()));
		boys.push_back(Elf("Johnny Depp", FarmerRole()));
		boys.push_back(Elf("Jim Carrey", ShamanRole()));
		boys.push_back(Orc("Bas Boomhakker", SoldierRole()));
		boys.push_back(Orc("Harald Hark", ShamanRole()));
		boys.push_back(Orc("Pim Pruimplukker", FarmerRole()));

		for (Boy b : boys)
			b.render();
	}
}