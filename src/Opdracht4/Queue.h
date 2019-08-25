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
		~Queue() {}
		Queue(const Queue& other) {
			memcpy(collection, other.collection, collection.size() + 1);
		}

		void put(const T& element) {
			collection.push_back(element);
		}

		T get()
		{
			T value = collection[0];
			collection.erase(collection.begin());
			return value;
		}

		int size() const
		{
			return collection.size();
		}

		T operator[](const int& index) {
			return collection[index];
		}

		void print() const
		{
			cout << "Printing Queue:\n";
			for (const T& value : collection) {
				cout << value << "\n";
			}
			cout << "\n";
		}

	};
}