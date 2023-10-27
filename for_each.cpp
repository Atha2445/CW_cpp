//SYNTAX OF FOR EACH LOOP

// for_each (InputIterator start_iter, InputIterator last_iter, Function fnc)

// start_iter : The beginning position 
// from where function operations has to be executed.
// last_iter : The ending position 
// till where function has to be executed.
// fnc/obj_fnc : The 3rd argument is a function or 
// an object function which operation would be applied to each element. 



#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

	vector<int> vec{ 1, 2, 3, 4, 5 };

	// this increases all the values in the vector by 1;
	for_each(vec.begin(), vec.end(), [](int& a) { a++; });

	// this prints all the values in the vector;
	for_each(vec.begin(), vec.end(),
			[](int a) { cout << a << " " << endl; });

	return 0;
}


// OUTPUT:
// 2 
// 3 
// 4 
// 5 
// 6 
