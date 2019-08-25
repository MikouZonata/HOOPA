#pragma once
#include<thread>
#include<iostream>
#include<time.h>
#include<vector>
#include"../Assignment.h"
#include"concurrent_vector.h"

using namespace std;

namespace NSAssignmentFive {
	class AssignmentFive : public Assignment {
	private:
		concurrent_vector<int> vector;

	public:
		AssignmentFive();
		~AssignmentFive() {}

		void setup() override {}
		void update() override {}
		void draw() override {}

		static void stressTestVector(int threadID, concurrent_vector<int>& vector);
	};
}
