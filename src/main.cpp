#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto cupIndex = vi{ -1, 1, 2, 3 };
	auto cups = vi{ -1, 1, 2, 3 };

	int m;
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		if (a != b) {
			auto i1 = cupIndex[a];
			auto i2 = cupIndex[b];

			auto c1 = cups[i1];
			auto c2 = cups[i2];

			cupIndex[a] = i2;
			cupIndex[b] = i1;

			cups[i1] = c2;
			cups[i2] = c1;
		}
	}

	cout << cups[1];

	return 0;
}