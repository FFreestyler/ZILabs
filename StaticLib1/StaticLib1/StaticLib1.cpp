#include "pch.h"
#include "framework.h"
#include "StaticLib1.h"

namespace Cryptography 
{
	long Calculation::FastMod(long a, long x, long p) 
	{
		long y = 1;
		long t = 0;

		while (x != 0) {
			if ((x & 1) == 1) {
				y = (y * 2) % p;
				t++;
			}
			a = (a * a) % p;
			x >>= 1;
		}
		return y;
	}

	std::tuple<long, long, long> Calculation::extendedGCD(long a, long n) {
		long long tempN = n;

		long long x1 = 1;
		long long x2 = 0;

		long long y1 = 0;
		long long y2 = 1;

		while (n != 0) {
			long long qoutient = a / n;
			long long remainder = a % n;

			a = n;
			n = remainder;

			long long tempX = x1 - x2 * qoutient;
			x1 = x2;
			x2 = tempX;

			long long tempY = y1 - y2 * qoutient;
			y1 = y2;
			y2 = tempY;
		}

		if (x1 < 0) {
			x1 += tempN;
		}

		return std::make_tuple(a, x1, y1);
	}
}