/*

Write a function that takes in 2 nonempty arrays of integers, finds the pair of numbers whose absolute difference is closest to zero, and returns an array containing these two numbers, with the number from the first array in the first position.

Note that the absolute difference of two integers is the distance between them on the real number line. For example, the absolute difference of - 5 and 5 is 10.

you can assume that there will only be one pair of numbers with the smallest difference.



  */

#include <vector>
#include <cmath>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) {
  
	// -1 5 10 20 28 3
	// 26 134 135 15 17
	
	int minDifference = INT_MAX;
	int firstNum = 0;
	int secondNum = 0;
	int ans = 0;
	
	for (int i = 0; i < arrayOne.size(); i++) {
		int temp_first = arrayOne[i];
		
		for (int j = 0; j < arrayTwo.size(); j++) {
			int temp_second = arrayTwo[j];
			
			if (temp_second >= temp_first) {
				ans = temp_second - temp_first;
			}
			
			else {
				ans = temp_first - temp_second;
			}
			
			if (ans < minDifference) {
				minDifference = ans;
				firstNum = temp_first;
				secondNum = temp_second;
			}
			
			
		}
	}
	
  return vector<int>{firstNum, secondNum};
}

