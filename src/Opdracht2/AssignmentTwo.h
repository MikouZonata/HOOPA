#pragma once
#include <iostream>
#include <string>
#include "../Assignment.h"
#include "Board.h"
#include "Strategies/ConwayStrategy.h"
#include "Strategies/TanglyStrategy.h"
#include "Strategies/OddStrategy.h"

using namespace std;

namespace NSAssignmentTwo {
	class AssignmentTwo : public Assignment
	{
	private:
		const ConwayStrategy conwayStrategy;
		const TanglyStrategy tanglyStrategy;
		const OddStrategy oddStrategy;
		//Choose strategy by changing the type of strategy below. Options: conwayStrategy, tanglyStrategy or oddStrategy
		const Strategy* strategy = &conwayStrategy;

		Board board{ strategy };

	public:
		AssignmentTwo() {}

		void setup() override {}

		void update() override {
			board.update();
		}

		void draw() override {
			ofSetColor(0, 0, 0, 255);
			ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetWindowHeight());

			board.draw();
		}

		~AssignmentTwo() {}
	};
}
