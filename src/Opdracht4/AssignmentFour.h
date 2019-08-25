#pragma once
#include<array>
#include<algorithm>
#include<functional>
#include<numeric>
#include<iostream>
#include<vector>
#include<string>
#include"../Assignment.h"
#include"Queue.h"

using namespace std;

namespace NSAssignmentFour {
	class AssignmentFour : public Assignment {
	private:

	public:
		AssignmentFour();
		~AssignmentFour() {}

		void setup() override {}
		void update() override {}
		void draw() override {}

		template <typename T>
		void sortArray(T collection[]);

		void queueDemonstration();

		template <typename T>
		void printVector(string headerMessage, vector<T> collection) {
			cout << headerMessage << ":\n";
			for (T value : collection)
				cout << value << "\n";
			cout << "\n";
		}
	};
}
