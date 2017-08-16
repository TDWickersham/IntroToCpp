#include "Func.h"
#include "mathutils.h"

using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	int aa = 1;
	int bb = 2;

	cout << "Sum: " << sum(aa, bb);

	cout << endl;

	int a;
	int b;
	
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	
	cout << "min: " << min(a, b) << endl;

	cout << endl;

	int c;
	int d;

	cin >> c;
	cout << endl;
	cin >> d;
	cout << endl;

	cout << "Max: " << max(c, d) << endl;

	cout << endl;

	int e;
	int f;
	int g;

	cin >> e;
	cout << endl;
	cin >> f;
	cout << endl;
	cin >> g;
	cout << endl;

	cout << "clamp: " << clamp(e, f, g) << endl;

	cout << endl;

	int h;
	int i;
	int j;
	int k;

	cin >> h;
	cout << endl;
	cin >> i;
	cout << endl;
	cin >> j;
	cout << endl;
	cin >> k;
	cout << endl;

	cout << "Distance: " << dist(h, i, j, k) << endl;


	system("pause");

}