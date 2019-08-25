#pragma once
#include"TanglyStrategy.h"

namespace NSAssignmentTwo {
	const bool TanglyStrategy::checkCell(const Cell& cell, const int& livingNeighbours) const {
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
