#include <iostream>
#include <vector>

using namespace std;

bool X(int a, int b) {
	return a != b;
}

bool O(int a, int b) {
	return a == b && a == 0;
}

bool A(int a, int b) {
	return !(a == b && a == 1);
}

signed main() {
	for(int i = 0; i<2; i++)
	for(int j = 0; j<2; j++)
	for(int k = 0; k<2; k++)
	for(int t = 0; t<2; t++)
	for(int i1 = 0; i1<2; i1++)
	for(int i2 = 0; i2<2; i2++)
	for(int j1 = 0; j1<3; j1++)
	for(int j2 = 0; j2<3; j2++)
	for(int k1 = 0; k1<4; k1++)
	for (int k2 = 0; k2 < 4; k2++)
	for(int t1 = 0; t1<5; t1++)
	for(int t2 = 0; t2<5; t2++) {
			int bo = 1;
			for (int a = 0; a < 2; a++)
				for (int b = 0; b < 2; b++) {
					int x = a, y = a;
					if (i1 == 1)x = b;
					if (i2 == 1)y = b;
					int f1 = A(x, y);
					if (i == 1) f1 = O(x, y);

					x = a, y = a;
					if (j1 == 1)x = b;
					if (j1 == 2)x = f1;
					if (j2 == 1)y = b;
					if (j2 == 2)y = f1;
					int f2 = A(x, y);
					if (j == 1) f2 = O(x, y);

					x = a, y = a;
					if (k1 == 1)x = b;
					if (k1 == 2)x = f1;
					if (k1 == 3)x = f2;
					if (k2 == 1)y = b;
					if (k2 == 2)y = f1;
					if (k2 == 3)y = f2;
					int f3 = A(x, y);
					if (k == 1) f3 = O(x, y);

					x = a, y = a;
					if (t1 == 1)x = b;
					if (t1 == 2)x = f1;
					if (t1 == 3)x = f2;
					if (t1 == 4)x = f3;
					if (t2 == 1)y = b;
					if (t2 == 2)y = f1;
					if (t2 == 3)y = f2;
					if (t2 == 4)y = f3;
					int f4 = A(x, y);
					if (t == 1) f4 = O(x, y);

					if (f4 != X(a, b))bo = 0;
				}
			if (bo) {
				cout << "YES";
				return 0;
			}
		}
	cout << "NO";
}
