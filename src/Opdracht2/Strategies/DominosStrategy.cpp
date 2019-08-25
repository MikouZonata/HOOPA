#pragma once
#include"DominosStrategy.h"

namespace NSAssignmentTwo {
	bool DominosStrategy::checkCell(Cell cell, int livingNeighbours) const {
		if (cell.aliveCurrently) {
			if (livingNeighbours > 3) {
				return false;
			}
			else {
				int randomValue = rand();
				if (randomValue % 100 < chanceToDie)
					return false;
				else
					return true;
			}
		}
		else {
			if (livingNeighbours < 2) {
				int randomValue = rand();
				if (randomValue % 100 < chanceToRevive)
					return true;
				else
					return false;
			}
			else {
				return false;
			}
		}
	}
}
