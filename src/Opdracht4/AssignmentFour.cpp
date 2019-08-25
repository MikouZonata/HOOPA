#include "AssignmentFour.h"

namespace NSAssignmentFour {
	AssignmentFour::AssignmentFour()
	{
		// maak een template functie die arrays kan sorteren
		int testInts[] = { 4,5,2,9 };
		string testStrings[] = { "Hoi", "Zebra", "Appel", "Xenomorph" };
		sortArray(testInts);
		sortArray(testStrings);

		// maak een template class die Queue-semantiek implementeert
		queueDemonstration();

		// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector
		vector<string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };

		// 1) de vector in 2 nieuwe vectoren te splitsen, 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
		vector<string> coloursBeforePurple;
		copy_if(colours.begin(), colours.end(), back_inserter(coloursBeforePurple), [](const string s) { return s < "purple"; });
		printVector("Colours, before purple", coloursBeforePurple);

		// 2) alle elementen UPPERCASE te maken.
		vector<string> coloursUpperCase;
		copy(colours.begin(), colours.end(), back_inserter(coloursUpperCase));
		for (int i = 0; i < coloursUpperCase.size(); i++) {
			for_each(coloursUpperCase[i].begin(), coloursUpperCase[i].end(), [](char & c) { c = ::toupper(c); });
		}
		printVector("Colours, upper case", coloursUpperCase);

		// 3) alle dubbele te verwijderen
		vector<string> coloursNoDuplicates;
		for (int i = 0; i < colours.size(); i++) {
			if (find(coloursNoDuplicates.begin(), coloursNoDuplicates.end(), colours[i]) == coloursNoDuplicates.end()) {
				coloursNoDuplicates.push_back(colours[i]);
			}
		}
		printVector("Colours, no duplicates", coloursNoDuplicates);


		// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
		vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };

		// 1) alle negatieve elementen te verwijderen
		vector<double> numbersPositive;
		copy_if(numbers.begin(), numbers.end(), back_inserter(numbersPositive), [](double d) { return greater_equal<>()(d, 0); });

		printVector("Numbers, all positive", numbersPositive);

		// 2) voor alle elementen te bepalen of ze even of oneven zijn
		vector<double> numbersEven, numbersOdd;
		copy_if(numbers.begin(), numbers.end(), back_inserter(numbersEven), [](const double d) { return (modulus<int>()(floor(d), 2) == 0); });
		copy_if(numbers.begin(), numbers.end(), back_inserter(numbersOdd), [](const double d) { return (modulus<int>()(floor(d), 2) == 1); });
		printVector("Numbers, even", numbersEven);
		printVector("Numbers, odd", numbersOdd);

		// 3) de som, het gemiddelde, en het product van alle getallen te berekenen
		double numbersSum = accumulate(numbers.begin(), numbers.end(), 0);
		double numbersAverage = divides<double>()(numbersSum, numbers.size());
		double numbersProduct = accumulate(numbers.begin(), numbers.end(), 1, multiplies<double>());
		cout << "The sum of all numbers: " << numbersSum << endl
			<< "The average of all numbers: " << numbersAverage << endl
			<< "The product of all numbers: " << numbersProduct << endl << endl;
	}

	void AssignmentFour::queueDemonstration()
	{
		Queue<int> testQueue;
		testQueue.print();

		for (int i : {2, 4, 8}) {
			testQueue.put(i);
		}
		testQueue.print();

		auto retrievedValue = testQueue.get();
		cout << "Retrieved value: " << retrievedValue << ".\n\n";
		testQueue.print();

		cout << "Queue size: " << testQueue.size() << ".\n\n";
	}

	template<typename T>
	void AssignmentFour::sortArray(T collection[])
	{
		sort(collection, collection + sizeof(collection));

		cout << "sortArray was called. Printing:\n";
		for (int i = 0; i < sizeof(collection); i++) {
			cout << collection[i] << "\n";
		}
		cout << "\n";
	}
}
