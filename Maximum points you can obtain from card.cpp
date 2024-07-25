class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum1=0;
        int sum2=0;
        int maxsum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            sum1+=cardPoints[i];
        }
        if (n==k) return sum1;
        else{
            maxsum=sum1;
        for (int i=k-1,j=n-1;i>=0;i--,j--){
            sum1-=cardPoints[i];
            sum2+=cardPoints[j];
            maxsum=max(maxsum,sum1+sum2);
        }
        }
        return maxsum;
    }
};