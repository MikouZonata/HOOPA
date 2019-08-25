#pragma once
#include"Strategy.h"
#include"../Cell.h"

namespace NSAssignmentTwo {
	class OddStrategy : public Strategy {
	public:
		const bool checkCell(const Cell& cell, const int& aliveNeighbours) const override;
	};
}