#pragma once
#include"../Cell.h"

namespace NSAssignmentTwo {
	class Strategy {
	public:
		virtual bool checkCell(Cell cell, int aliveNeighbours) const = 0;
	};
}