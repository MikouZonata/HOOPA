#pragma once
#include"../Cell.h"

namespace NSAssignmentTwo {
	class Strategy {
	public:
		virtual const bool checkCell(const Cell& cell, const int& aliveNeighbours) const = 0;
	};
}