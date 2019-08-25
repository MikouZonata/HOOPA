#include "Board.h"

namespace NSAssignmentTwo {
	void Board::createBoard() {
		srand(ofGetElapsedTimef());

		cells.resize(boardWidth);

		for (int x = 0; x < boardWidth; x++) {
			for (int y = 0; y < boardHeight; y++) {
				int roll = rand() % 2;
				bool nextCellAlive;
				if (roll == 0)
					nextCellAlive = false;
				else
					nextCellAlive = true;

				cells[x].push_back(new Cell(nextCellAlive));
			}
		}
	}

	void Board::update() {
		float newTime = ofGetElapsedTimef();
		float deltaTime = newTime - oldTime;
		oldTime = newTime;

		updateTimer += deltaTime;
		if (updateTimer >= secondsPerUpdate) {
			updateCellStates();
			updateTimer = 0;
		}
	}

	void Board::updateCellStates()
	{
		for (int x = 0; x < boardWidth; x++) {
			for (int y = 0; y < boardHeight; y++) {
				//Find living neightbours
				int livingNeighbours = 0;
				if (x > 0 && cells[x - 1][y]->aliveCurrently) {
					livingNeighbours++;
				}
				if (x < boardWidth - 1 && cells[x + 1][y]->aliveCurrently) {
					livingNeighbours++;
				}
				if (y > 0 && cells[x][y - 1]->aliveCurrently) {
					livingNeighbours++;
				}
				if (y < boardHeight - 1 && cells[x][y + 1]->aliveCurrently) {
					livingNeighbours++;
				}

				//Affect cell based on living neighbours and chosen strategy
				Cell* cell = cells[x][y];
				cell->aliveNext = strategy->checkCell(*cell, livingNeighbours);
			}
		}

		for (vector<Cell*> collumn : cells) {
			for (Cell* c : collumn) {
				c->updateState();
			}
		}
	}

	void Board::drawBoard()
	{
		for (int y = 0; y < boardHeight; y++) {
			string row = "";
			for (int x = 0; x < boardWidth; x++) {
				if (cells[x][y]->aliveCurrently)
					ofSetColor(cellAliveColor);
				else
					ofSetColor(cellDeadColor);
				ofDrawRectangle((cellSize + distanceBetweenCells) * x, (cellSize + distanceBetweenCells) * y, cellSize, cellSize);
			}
		}
	}
}
