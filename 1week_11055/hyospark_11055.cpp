#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int	a;
	scanf("%d", &a);

	int	arr[a + 1] = {0,};
	int dp[a + 1] = {0,};
	int result = 0;

	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &arr[i]);
		dp[i] = arr[i];
		for (int j = 1; j < i; j++)
		{
			if (arr[j] < arr[i])
				dp[i] = max(dp[j] + arr[i], dp[i]);
		}
	}
	for (int i = 0; i <= a; i++)
		result = max(dp[i], result);
    printf("%d", result);   
	return 0;
}
