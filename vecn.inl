template <typename T, const int length>
inline vecn<T, length>::vecn() {
	memset(&data, 0, sizeof(data));
}

template <typename T, const int length>
inline vecn<T, length>::vecn(const vecn<T, length>& v) {
	for (int i = 0; i < length; ++i) {
		data[i] = v.data[i];
	}
}

template <typename T, const int length>
inline vecn<T, length>::operator const T* () const {
	return &data[0];
}

template <typename T, const int length>
inline T& vecn<T, length>::operator [] (int i) {
	return data[i];
}

template <typename T, const int length>
inline const T& vecn<T, length>::operator [] (int i) const {
	return data[i];
}

template <typename T, const int length>
inline vecn<T, length>& vecn<T, length>::operator = (const vecn<T, length>& v) {
	memcpy(&data, v.data, sizeof(data));
	return *this;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator + (const vecn& v) const {
	vecn<T, length> ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] + v.data[i];
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator += (const vecn& v) {
	*this = *this + v;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator - (const vecn& v) const {
	vecn<T, length> ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] - v.data[i];
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator -= (const vecn& v) {
	*this = *this - v;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator * (const vecn& v) const {
	vecn<T, length> ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] * v.data[i];
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator *= (const vecn& v) {
	*this = *this * v;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator / (const vecn& v) const {
	vecn<T, length> ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] / v.data[i];
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator /= (const vecn& v) {
	*this = *this / v;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator * (const T& s) const {
	vecn<T, length> ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] * s;
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator *= (const T& s) {
	*this = *this * s;
}

template <typename T, const int length>
inline vecn<T, length> vecn<T, length>::operator / (const T& s) const {
	vtype ret;
	for (auto i = 0; i < length; ++i) {
		ret.data[i] = data[i] / s;
	}

	return ret;
}

template <typename T, const int length>
inline void vecn<T, length>::operator /= (const T& s) {
	*this = *this / s;
}
