point orthocenter(const point &a, const point &b, const point &c) {
	return a + b + c - circumcenter(a, b, c) * 2.0;
}

