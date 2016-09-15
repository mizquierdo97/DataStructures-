#include <math.h>

class Vec3{
private:

public:
	Vec3() {};
	Vec3(const float vx, const float vy, const float vz) {
		x = vx;
		y = vy;
		z = vz;
	};

	Vec3(Vec3 &v) {	
		x = v.x;
		y = v.y;
		z = v.z;
	};


	~Vec3() {};
	double x;
	double y;
	double z;

	Vec3& operator+(const Vec3 &b) {
		this->x += b.x;
		this->y += b.y;
		this->z += b.z;
		return *this;
	};
	Vec3& operator-(const Vec3 &b) {
		this->x -= b.x;
		this->y -= b.y;
		this->z -= b.z;
		return *this;
	};

	Vec3& operator+=(const Vec3 &b) {
		this->x += b.x;
		this->y += b.y;
		this->z += b.z;
		return *this;
	};
	Vec3& operator-=(const Vec3 &b) {
		this->x -= b.x;
		this->y -= b.y;
		this->z -= b.z;
		return *this;
	};

	bool operator==(const Vec3 &b) {
		if (b.x != x || b.y != y || b.z != z) {
			return false;
		}
		else return true;
	}

	bool operator!=(const Vec3 &b) {
		if (b.x == x && b.y == y && b.z == z) {
			return false;
		}
		else return true;
	}

public:
	double angle(Vec3 &v1, Vec3 &v2) {

	};

	void flip() {
		x = -x;
		y = -y;
		z = -z;
	};
	double length() {
		return (sqrt(x*x + y*y + z*z));
	}
};