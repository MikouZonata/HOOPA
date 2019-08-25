#pragma once
#include <iostream>
#include <string>
#include "../Assignment.h"
#include "Board.h"
#include "Strategies/ConwayStrategy.h"
#include "Strategies/DominosStrategy.h"
#include "Strategies/OddStrategy.h"

using namespace std;

namespace NSAssignmentTwo {
	class AssignmentTwo : public Assignment
	{
	private:
		//Choose strategy by changing the type of strategy below. Options: ConwayStrategy, DominosStrategy or OddStrategy
		Strategy* strategy = new ConwayStrategy();
		Board board{ strategy };

	public:
		AssignmentTwo() {}

		void setup() override {}

		void update() override {
			board.update();
		}

		void draw() override {
			board.draw();
		}

		~AssignmentTwo() {}
	};
}
