#pragma once
#include"Strategy.h"
#include"../Cell.h"

namespace NSAssignmentTwo {
	class ConwayStrategy : public Strategy {
	public:
		bool checkCell(Cell cell, int aliveNeighbours) const override;
	};
}
