#ifndef _VEC_H
#define _VEC_H
#include <ostream>
#include <math.h>

//! template version of a 3 component vector

/** Vec.h
*define a double3 object for performing 3D vector operations.
*This is a simplified version that implements vector subtraction, 
*dotproduct, and magnitude functions.
*/
template<typename T>/*!generic 3D vector of type T*/
class _vec3 { 
public:
	//! default constructor
	_vec3<T>() : d{ 0,0,0 } {} 
	_vec3<T>(T a, T b, T c) : d{ a,b,c } {}
	//! define operator
	T& operator[] (int i) { return d[i]; } //! another operator definition
	T operator[] (int i) const { return d[i]; } //! read only getter
	
	friend _vec3<T> operator+/*< vector addition */(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] + b[0], a[1] + b[1], a[2] + b[2]); 
	}
	friend _vec3<T> operator-(const _vec3<T>& a, const _vec3<T>& b) {
		return _vec3<T>(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
	}
	friend T dot(const _vec3<T>& a, const _vec3<T>& b) {
		return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
	}
	friend double mag(const _vec3<T>& a) { return sqrt(dot(a, a)); }
	friend std::ostream& operator<<(std::ostream& out, const _vec3<T>& a) {
		out << a[0] << " " << a[1] << " " << a[2]; return out;
	}
protected:
	T d[3];
};
//! define "nicknames"
using double3 = _vec3<double>; 
//! assign a nickname 
#endif
