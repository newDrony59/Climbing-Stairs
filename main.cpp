/*

Question Climbing Stairs: 
A staircase is given with a non-negative cost per each step. Once you pay the cost, you can either climb one or two steps. Create a solution to find the minimum sum of costs to reach the top (finishing the payments including cost[-2] or cost[-1]). You can either start at cost[0] or cost[1].

Examples:
climbingStairs([0, 2, 2, 1]) --> 2

climbingStairs([0, 2, 3, 2]) --> 3

climbingStairs([10, 15, 20]) --> 15

climbingStairs([0, 0, 0, 0, 0, 0]) --> 0


*/

using namespace std;
# include <cmath>

int climbingS(vector<int>cost, int n) 
{
	vector<int>dp(n);
	if (n == 1) return cost[0];
	dp[0] = cost[0];
	dp[1] = cost[1];
  for (int i = 2; i < n; i++)
	{
		dp[i] = min(dp[i-1],dp[i-2])+cost[i];
	}
	return min(dp[n-2],dp[n-1]);
}

int climbingStairs(vector<int> cost) 
{
	return climbingS(cost,cost.size());
}


