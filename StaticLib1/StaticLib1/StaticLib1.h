#pragma once
#include <vector>
#include <tuple>

namespace Cryptography 
{
	class Calculation 
	{
	public:
		static long FastMod(long a, long x, long p);

		static std::tuple<long, long, long> extendedGCD(long a, long n);
	};
}