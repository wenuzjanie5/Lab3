#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	//zadanie 1
	int max;
	cout << "Zadanie 1\n\nPodaj liczbę.\n";
	cin >> max, cout << endl;
	for (int i = 0; i < max; i++)
		cout << i << endl;
	
	//zadanie 2
	int num;
	cout << "\n\nZadanie 2\n\nPodaj liczby.\n\n";
	cin >> num;
	while (num >= 0)
		cin >> num;

	//zadanie 3
	int plus = 0, minus = 0, plus_sum = 0, minus_sum = 0;
	cout << "\n\nZadanie 3\n\nPodaj 10 liczb.\n\n";
	for (int i = 0; i < 10; i++) {
		cin >> num;
		if (num > 0) {
			plus++;
			plus_sum += num;
		}
		else if (num < 0) {
			minus++;
			minus_sum += num;
		}
		else{}
	}
	cout << "\nLiczb dodatnich było " << plus << ", a ich suma to " << plus_sum << ".\nLiczb ujemnych było " << minus << ", a ich suma to " << minus_sum;

	//zadanie 4
	int n, sum = 0;
	cout << "\n\nZadanie 4\n\nPodaj liczbę n. (n>0)\n\n";
	cin >> n;
	for (int i = 0; i < n; i++) {
		if ((i + 1) % 2 == 0)
			sum += i + 1;
	}
	cout << "\nSuma liczb parzystych tego ciągu wynosi " << sum;

	//zadanie 5
	cout << "\n\nZadanie 5\n\nPodaj liczbę liczb. (n>0)\n\n";
	cin >> n, cout << endl;
	srand(time(NULL));
	sum = 0;
	for (int i = 0; i < n; i++) {
		num = rand() % 55 - 10;
		cout << num << "; ";
		if (num % 2 == 0)
			sum += num;
	}
	cout << "\nSuma liczb parzystych tego ciągu wynosi " << sum;

	//zadanie 1'
	float sum1 = 0, m;
	int i;
	cout << "\n\nZadanie 1\n\nPodaj liczbę studentów\n\n";
	cin >> m;
	i = m;
	cout << "\nPodaj liczby punktów poszczególnych studentów\n\n";
	while (i > 0) {
		float points;
		cin >> points;
		sum1 += points;
		i--;
	}
	cout << "\nŚrednia wynosi " << sum1 / m << ".";

	//zadanie 2'
	cout << "\n\nZadanie 2\n\nPodaj liczbę studentów.\n\n";
	cin >> m;
	i = m;
	sum1 = 0;
	cout << "\nPodaj liczby punktów poszczególnych studentów (0, 100).\n\n";
	while (i > 0) {
		float points;
		cin >> points;
		if (0 <= points && points <= 100) {
			sum1 += points;
			i--;
		}
		else i--;
	}
	cout << "\nŚrednia wynosi " << sum1 / m << ".";

	//zadanie 3'
	cout<<"\n\nZadanie 3\n\n";
	m = 1;
	sum1 = 0;
	cout << "\nPodaj liczby punktów poszczególnych studentów (0, 100).\n\n";
	while (true) {
		float points;
		cin >> points;
		if (0 <= points && points <= 100) {
			sum1 += points;
			m++;
		}
		else break;
	}
	cout << "\nŚrednia wynosi " << sum1 / m << ".";

	//zadanie 4'
	cout << "\n\nZadanie 4\n\n";
	m = 1;
	sum1 = 0;
	cout << "\nPodaj liczby punktów poszczególnych studentów (0, 100).\n\n";
	do{
		float points;
		cin >> points;
		if (0 <= points && points <= 100) {
			sum1 += points;
			m++;
		}
		else break;
	} while (true);
	cout << "\nŚrednia wynosi " << sum1 / m << ".";

	//zadanie 5'
	cout << "\n\nZadanie 5\n\n";
	for (int j = 1; j < 101; j++)
		cout << j << " ";
	cout << endl << endl;
	for (int j = 100; j >= 0; j--)
		cout << j << " ";
	cout << endl << endl;
	for (int j = 7; j < 78; j += 7)
		cout << j << " ";
	cout << endl << endl;
	for(int j = 20; j >- 1; j -= 2)
		cout << j << " ";
}
