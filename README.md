# vecn.h

A small header only compile time Vector object for use with OpenGL.

## Compile template functions

All vector template functions are expanded during compile time.

To add a new vector type and size, simply add a type definition to the bottom of `vecn.h`. This will compile the template functions for a specific size and type.

```
typedef vecn<float, 3> vec3f;
```

To add additional functionality create an object that inherits from vecn.

```
#include "vecn.h"

template <typename T>
class vec3 : public vecn<T, 3> {
public:
	inline vec3() = default;
	inline vec3(const vecn<T, 3>& v) : vecn<T, 3>(v) {}
	inline vec3(T x, T y, T z) {
		vecn<T, 3>::data[0] = x;
		vecn<T, 3>::data[1] = y;
		vecn<T, 3>::data[2] = z;
	}
};

// compile template functions
typedef vec3<float> vec3f;
```

## Constructors

### vecn

Creates a new vector with all components set to zero (default).

### vecn(const vecn& v)

Creates a new vector from another vector (copy constructor).

## Operators

### operator T*

Points to the Vector data.

### operator [] (int i)

Access an element in the Vector.

### operator =

Assign a Vector to another Vector.

### operator +

Add two Vectors to form a new Vector.

### operator +=

Add a Vector to this Vector.

### operator -

Subtract two Vectors to form a new Vector.

### operator -=

Subtract a Vector from this Vector.

### operator *

Multiply two Vectors, or scale this Vector by a scalar to form a new Vector.

### operator *=

Multiply this Vector by another Vector, or scale this Vector by a scalar.
