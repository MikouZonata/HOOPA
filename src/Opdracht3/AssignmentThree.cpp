#include"AssignmentThree.h"

namespace NSAssignmentThree {
	AssignmentThree::AssignmentThree() {
		npcs.push_back(new Elf("Orlando Bloom", SoldierRole()));
		npcs.push_back(new Elf("Johnny Depp", FarmerRole()));
		npcs.push_back(new Elf("Jim Carrey", ShamanRole()));
		npcs.push_back(new Orc("Bas Boomhakker", SoldierRole()));
		npcs.push_back(new Orc("Harald Hark", ShamanRole()));
		npcs.push_back(new Orc("Pim Pruimplukker", FarmerRole()));

		for (int i = 0; i < npcs.size(); i++) {
			npcs[i]->render();
		}
	}
}