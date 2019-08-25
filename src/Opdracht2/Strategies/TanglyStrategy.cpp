#pragma once
#include"TanglyStrategy.h"

namespace NSAssignmentTwo {
	bool TanglyStrategy::checkCell(Cell cell, int livingNeighbours) const {
		if (cell.aliveCurrently) {
			if (livingNeighbours > 2 || livingNeighbours == 0)
				return false;
			else
				return true;
		}
		else {
			if (livingNeighbours == 1)
				return true;
			else
				return false;

		}
	}
}
