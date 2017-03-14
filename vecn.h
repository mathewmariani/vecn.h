#pragma once

template <typename T, const int length>
class vecn {
// type definitions
protected:

// constructors
public:
	vecn();
	vecn(const vecn& v);

// operators
public:
	operator const T* () const;

	T& operator [] (int i);
	const T& operator [] (int i) const;

	vecn& operator = (const vecn& v);

	vecn operator + (const vecn& v) const;
	void operator += (const vecn& v);

	vecn operator - (const vecn& v) const;
	void operator -= (const vecn& v);

	vecn operator * (const vecn& v) const;
	void operator *= (const vecn& v);

	vecn operator / (const vecn& v) const;
	void operator /= (const vecn& v);

	vecn operator * (const T& s) const;
	void operator *= (const T& s);

	vecn operator / (const T& s) const;
	void operator /= (const T& s);

// protected variables
protected:
	T data[length];
};	// vecn

#include "vecn.inl"