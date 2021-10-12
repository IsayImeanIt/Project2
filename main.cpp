#include <iostream>
#include "Vec.h"
//! main.cpp
/*! 
define a double3 object for performing 3D vector operations.
This is a simplified version that implements vector subtraction,
dotproduct, and magnitude functions.

 @param a one double3 matrix
 @param b another double3 matrix
 @return a - b
 @return a*b
*/
int main(int num_args, char** args) {
	double3 a{ 0,1,2 };
	double3 b{ 0,0,1 };
	std::cout << a - b << std::endl;
	std::cout << dot(a, b) << std::endl;
	return 0;
}