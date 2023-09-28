struct Point {
    int x, y, z; // 멤버변수 정의
    Point(int x, int y, int z) : x(x), y(y), z(z) {} // 매개변수 멤버변수로 설정
    Point() { x = -1; y = -1; z = -1; } // 매개변수 없을 경우 초기값 설정
    bool operator < (const Point &a) const { // 연산자 오버로딩
        if (x == a.x) {
            if (y == a.y) return z < a.z; // 3. (y 같으면) z 비교
            return y < a.y; // 2. (x 같으면) y 비교
        }
        return x < a.x; // 1. x 비교
    }
};
