/*

Write a function that takes in a non-empty array of integers that are sorted in ascending order and returns a new array of the same length with the squares of the original integers also sorted in ascending order.
*/

#include <vector>

using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {

	// loop through each elements
	for (int i = 0; i < array.size(); i++) {
		// square each elemensts
		array[i] = array[i]*array[i];
	}
	
	sort(array.begin(),array.end());
	
  return array;
}

