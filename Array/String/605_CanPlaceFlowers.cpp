class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int maxi = 0;
        int size = flowerbed.size();
        if(flowerbed.size()==1 && flowerbed[0]==0)
        {
            maxi++;
        }
        else
        {
            if(flowerbed[0]==0 && flowerbed[1]==0)
            {
                maxi++;
                flowerbed[0]=1;
            }
            if(flowerbed[size-1]==0 && flowerbed[size-2]==0)
            {
                maxi++;
                flowerbed[size-1]=1;
            }
            for(int i=2; i<size-1; i++)
            {
                if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0)
                {
                    maxi++;
                    flowerbed[i]=1;
                }
            }
        }
        return maxi>=n;
    }
};