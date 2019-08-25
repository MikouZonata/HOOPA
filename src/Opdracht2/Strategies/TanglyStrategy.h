#pragma once
#include"Strategy.h"
#include"ofUtils.h"
#include"../Cell.h"

namespace NSAssignmentTwo {
	class TanglyStrategy : public Strategy {
	private:
		int chanceToRevive = 5;
		int chanceToDie = 15;

	public:
		bool checkCell(Cell cell, int aliveNeighbours) const override;
	};
}