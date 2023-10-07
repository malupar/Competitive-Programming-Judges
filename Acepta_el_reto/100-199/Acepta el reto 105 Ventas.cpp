#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	double val;
	cin >> val;
	while (val != -1) {
		vector<pair<double, int>> week(6);
		week[0].first = val;
		for (int i = 1; i < 6; ++i) {
			cin >> week[i].first;
			val = week[i].first;
			week[i].second = i;
		}
		double sum = 0;
		for (int i = 0; i < 6; ++i) sum += week[i].first;
		sort(week.begin(), week.end());

		if (week[5].first == week[4].first) cout << "EMPATE ";
		else if (week[5].second == 0) cout << "MARTES ";
		else if (week[5].second == 1) cout << "MIERCOLES ";
		else if (week[5].second == 2) cout << "JUEVES ";
		else if (week[5].second == 3) cout << "VIERNES ";
		else if (week[5].second == 4) cout << "SABADO ";
		else if (week[5].second == 5) cout << "DOMINGO ";

		if (week[0].first == week[1].first) cout << "EMPATE ";
		else if (week[0].second == 0) cout << "MARTES ";
		else if (week[0].second == 1) cout << "MIERCOLES ";
		else if (week[0].second == 2) cout << "JUEVES ";
		else if (week[0].second == 3) cout << "VIERNES ";
		else if (week[0].second == 4) cout << "SABADO ";
		else if (week[0].second == 5) cout << "DOMINGO ";

		if (val*6 > sum) cout << "SI" << '\n';
		else cout << "NO" << '\n';
		cin >> val;
	}
}
