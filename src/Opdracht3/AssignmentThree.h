#pragma once
#include<vector>
#include"../Assignment.h"
#include"Elf.h"
#include"Orc.h"
#include"FarmerRole.h"
#include"ShamanRole.h"
#include"SoldierRole.h"

namespace NSAssignmentThree {
	class AssignmentThree : public Assignment {
	private:
		vector<NPC*> npcs;

	public:
		AssignmentThree();
		~AssignmentThree() {}

		void setup() override {}
		void update() override {}
		void draw() override {}
	};
}
