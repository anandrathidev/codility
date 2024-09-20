#include <vector>
namespace CyclicRotation
{
	vector<int> solution(vector<int>& A, int K)
	{
		int iK = K;
		const int len = (int)A.size();
		if ((K < 1) || len < 2)
		{
			return A;
		}
		if (K > len)
		{
			K = K % len;
		}
		vector<int> B(len);

		for (size_t i = 0; i < (len-K); i++)
		{
			B[i] = A[K + i];
		}


	}
}

TestCyclicRotation()
{
}

}