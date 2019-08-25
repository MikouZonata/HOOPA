#include "AssignmentFive.h"

namespace NSAssignmentFive {
	AssignmentFive::AssignmentFive()
	{
		std::vector<thread> threads;

		for (int i = 0; i < 4; i++) {
			threads.push_back(thread(stressTestVector, i, ref(AssignmentFive::vector)));
		}
		for (thread& t : threads)
			t.join();
		/*
			thread threadOne(stressTestVector, 0, ref(vector));
			thread threadTwo(stressTestVector, 1, ref(vector));
			thread threadThree(stressTestVector, 2, ref(vector));
			thread threadFour(stressTestVector, 3, ref(vector));
			threadOne.join();
			threadTwo.join();
			threadThree.join();
			threadFour.join();*/
	}

	void AssignmentFive::stressTestVector(int threadID, concurrent_vector<int>& vector)
	{
		srand(time(NULL));
		for (int i = 0; i < 10; i++) {
			vector.pushBack(rand() % 100);
			vector.printData(threadID);
		}
	}
}
