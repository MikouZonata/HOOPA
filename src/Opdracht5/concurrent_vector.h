#pragma once
#include<vector>
#include<mutex>
#include<algorithm>
#include<iterator>

using namespace std;

namespace NSAssignmentFive {
	template <typename T>
	class concurrent_vector {
	private:
		vector<T> values;
		mutex lock;

	public:
		void getVector(vector<T>& receivingVector) {
			lock_guard<mutex> locker(lock);
			copy(values.begin(), values.end(), back_inserter(receivingVector));
		}

		T getFirstValue() {
			lock_guard<mutex> locker(lock);
			return values[values.begin()];
		}

		T getLastValue() {
			lock_guard<mutex> locker(lock);
			return values[values.end() - 1];
		}

		int getSize() {
			lock_guard<mutex> locker(lock);
			return values.size();
		}

		void pushBack(T value) {
			lock_guard<mutex> locker(lock);
			values.push_back(value);
		}

		void popBack() {
			lock_guard<mutex> locked(lock);
			values.pop_back();
		}

		void clear() {
			lock_guard<mutex> locker(lock);
			values.clear();
		}

		void printData(int requestingThreadID) {
			lock_guard<mutex> locker(lock);
			cout << "Thread " << requestingThreadID << " requests a print of my data." << endl;
			cout << "Values: ";
			for (const T& v : values) {
				cout << v << " ";
			}
			cout << endl << "Size: " << values.size() << endl << endl;
		}

		concurrent_vector() {}
		concurrent_vector(const vector<T>& startingCollection) {
			lock_guard<mutex> locker(lock);
			copy(startingCollection.begin(), startingCollection.end(), back_inserter(values));
		}
		~concurrent_vector() {}
	};
}
