#pragma once
#include"Strategy.h"
#include"ofUtils.h"
#include"../Cell.h"

namespace NSAssignmentTwo {
	class TanglyStrategy : public Strategy {
	public:
		const bool checkCell(const Cell& cell, const int& aliveNeighbours) const override;
	};
}