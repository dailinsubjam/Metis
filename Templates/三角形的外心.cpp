point circumcenter(const point &a, const point &b, const point &c) {
	point p = b - a, q = c - a, s(dot(p, p) / 2, dot(q, q) / 2);
	double d = det(p, q);
	return a + point(det(s, point(p.y, q.y)), det(point(p.x, q.x), s)) / d;
}

