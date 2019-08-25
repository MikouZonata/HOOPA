#pragma once
#include<vector>
#include<string>

using namespace std;

namespace NSAssignmentFour {
	template <typename T>
	class Queue {
	private:
		vector<T> collection;

	public:
		Queue() {}

		void put(T element) {
			collection.push_back(element);
		}

		T get()
		{
			T value = collection[0];
			collection.erase(collection.begin());
			return value;
		}

		int size()
		{
			return collection.size();
		}


		void print()
		{
			cout << "Printing Queue:\n";
			for (const T& value : collection) {
				cout << value << "\n";
			}
			cout << "\n";
		}

		~Queue() {}
	};
}