#pragma once
#include"OddStrategy.h"

namespace NSAssignmentTwo {
	const bool OddStrategy::checkCell(const Cell& cell, const int& livingNeighbours) const {
		if (cell.aliveCurrently) {
			if (livingNeighbours == 0 || livingNeighbours == 2 || livingNeighbours == 4) {
				return false;
			}
			else {
				return true;
			}
		}
		else {
			if (livingNeighbours == 1 || livingNeighbours == 3) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}
