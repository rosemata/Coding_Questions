/*
Write a function that takes in an array of integers and returns a new array containing, at each index, the next element in the input array that's greater than the element at that index in the input array.

Sample input:
	array = [2, 5, -3, -4, 6, 7, 2]
Sample output:
	[5, 6, 6, 6, 7, -1, 5]




*/



#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> array) {
  /*
	Goal: 
	
	return a new array
	each element
		cotaining at each index,
		the next element in the input array
		
		that's greater than the element at that index in the input array
	
	[2, 5, -3, 4, 6, 7, 2]
	[5, 6,  6, 6, 7, -1, 5]
	
	[2, 5, -3]
	[5, -1, 2]
	
	vector<int> greaterArray;
	
	(1)loop every element
		then i will take the first element
		i will then start comparing to the next element
		but i cant use my current loop because i need to keep track for each element
		
		so i will 
		(2) use a while loop, to iterate again until i find nunmber > 
		what do i currently have
		i have index i, keeps track of my current loop
		and i need another variable to iterate in the array
		
		(3) check if i found a number, 
		if i dont go back to beginning = 0
		if iterator 1 === iterator ==2 
		no greater value is found
		so we'll append -1
		
	*/
	vector<int> greaterArray;
	
	// 	[2, 5, -3]
	// [5, -1, 2]
	for (int i = 0; i < array.size(); i++) {
		int curNum = array[i];
		bool found = true;
		
		
		int j = i+1;
		if(i+1 == array.size()) {
			j = 0;
		}
		
		while((curNum > array[j] || curNum == array[j]) && found == true) {
			
			cout << curNum << " " << array[j] << endl;
			
			j++;
			
			if(j == array.size()) {
				j = 0;
			}
				 
			if (j == i) {	// not found
				greaterArray.push_back(-1);
				found = false;
			}
				 
		}
				 
		if(found == true) {
			greaterArray.push_back(array[j]);
		}
		
		
		
	}
	
	
	
  return greaterArray;
}

