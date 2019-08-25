#pragma once
#include "ofMain.h"
#include "Opdracht1\AssignmentOne.h"
#include "Opdracht2\AssignmentTwo.h"
#include "Opdracht3\AssignmentThree.h"
#include "Opdracht4\AssignmentFour.h"
#include "Opdracht5\AssignmentFive.h"

using namespace NSAssignmentOne;
using namespace NSAssignmentTwo;
using namespace NSAssignmentThree;
using namespace NSAssignmentFour;
using namespace NSAssignmentFive;

using namespace std;

class ofApp : public ofBaseApp {
public:
	//Pick assignment to run below.
	//AssignmentOne()		== Modules, Teachers & Students
	//AssignmentTwo()		== Conway's Game of Life
	//AssignmentThree()		== Orc & Elves
	//AssignmentFour()		== Collections & Generics
	//AssignmentFive()		== Concurrent Vector & Threads
	unique_ptr<Assignment> activeAssignment(AssignmentFive);

	void setup();
	void update();
	void draw();
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
};
