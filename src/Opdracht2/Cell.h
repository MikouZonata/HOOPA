#pragma once

namespace NSAssignmentTwo {
	class Cell
	{
	public:
		bool aliveCurrently;
		bool aliveNext;

		Cell(bool alive) {
			aliveCurrently = alive;
		}

		void updateState() {
			aliveCurrently = aliveNext;
		}

		~Cell() {}
	};
}