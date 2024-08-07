int minAdjustmentCost(int A[], int n, int target)
	{
	   int M= 100;
	     int dp[n][M + 1];
 

    for (int j = 0; j <= M; j++)
        dp[0][j] = abs(j - A[0]);
 
   
    for (int i = 1; i < n; i++)
    {
      
        for (int j = 0; j <= M; j++)
        {
         
          dp[i][j] = INT_MAX;
 
          for (int k = max(j-target,0); k <= min(M,j+target); k++)
             dp[i][j] = min(dp[i][j], dp[i - 1][k] + abs(A[i] - j));
        }
    }   
 
    int res = INT_MAX;
    for (int j = 0; j <= M; j++)
        res = min(res, dp[n - 1][j]);
 
    return res;
	}