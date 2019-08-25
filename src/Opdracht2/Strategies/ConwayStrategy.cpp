#pragma once
#include"ConwayStrategy.h"

namespace NSAssignmentTwo {
	const bool ConwayStrategy::checkCell(const Cell& cell, const int& livingNeighbours) const {
		if (cell.aliveCurrently) {
			if (livingNeighbours < 2 || livingNeighbours > 3) {
				return false;
			}
			else {
				return true;
			}
		}
		else {
			if (livingNeighbours == 3) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}
