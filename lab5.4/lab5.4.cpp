#include <iostream>
#include <cmath>

using namespace std;

double S0(const int K)
{
	double s = 0;
	for (int i = K; i <= 15; i++)
		s += cos(i) / (1 + sin(1. * i) * sin(1. * i));
	return s;
}
double S1(const int K, const int i)
{
	if (i > 15)
		return 0;
	else
		return cos(i) / (1 + sin(1. * i) * sin(1. * i)) + S1(K, i + 1);
}
double S2(const int K, const int i)
{
	if (i < K)
		return 0;
	else
		return cos(i) / (1 + sin(1. * i) * sin(1. * i)) + S2(K, i - 1);
}
double S3(const int K, const int i, double t)
{
	t = t + cos(i) / (1 + sin(1. * i) * sin(1. * i));
	if (i >= 15)
		return t;
	else
		return S3(K, i + 1, t);
}
double S4(const int K, const int i, double t)
{
	t = t + cos(i) / (1 + sin(1. * i) * sin(1. * i));
	if (i <= K)
		return t;
	else
		return S4(K, i - 1, t);
}
int main()
{
	int K;
	cout << "K = "; cin >> K;
	cout << "(iter) S0 = " << S0(K) << endl;
	cout << "(rec up ++) S1 = " << S1(K, K) << endl;
	cout << "(rec up --) S2 = " << S2(K, 15) << endl;
	cout << "(rec down ++) S3 = " << S3(K, K, 0) << endl;
	cout << "(rec down --) S4 = " << S4(K, 15, 0) << endl;
	
	return 0;
}