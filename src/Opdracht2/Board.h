#pragma once
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include "Strategies/ConwayStrategy.h"
#include "Strategies/DominosStrategy.h"
#include "Strategies/OddStrategy.h"
#include "ofGraphics.h"
#include "ofUtils.h"
#include "Cell.h"

using namespace std;

namespace NSAssignmentTwo {
	class Board
	{
	private:
		const int boardWidth = 60;
		const int boardHeight = 60;
		const int cellSize = 12;
		const int distanceBetweenCells = 2;
		const ofColor cellAliveColor = ofColor(70, 140, 220, 255);
		const ofColor cellDeadColor = ofColor(60, 40, 40, 255);

		vector<vector<Cell*>> cells;
		Strategy *strategy;

		float oldTime = 0;
		float updateTimer = 0;
		const float secondsPerUpdate = .32f;

		void createBoard();
		void updateCellStates();
		void drawBoard();

	public:
		Board(Strategy* strategy) {
			this->strategy = strategy;
			createBoard();
		}

		void update();

		void draw() {
			drawBoard();
		}

		~Board() {}
	};
}
