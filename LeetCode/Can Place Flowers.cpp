class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(flowerbed.size()==1)
        {
            if(!flowerbed[0]&&!n)
            {
                return true;
            }
            
            if(flowerbed[0]&&n>0)
            {
                return false;
            }

            if(!flowerbed[0]&&n==1)
            {
                return true;
            }

            if(!flowerbed[0]&&n>1)
            {
                return false;
            }

        }
        
        if(!flowerbed[0]&&!flowerbed[1])
            {
                flowerbed[0]=1;
                n--;
            }
        
        if(!flowerbed[flowerbed.size()-1]&&!flowerbed[flowerbed.size()-2])
        {
            flowerbed[flowerbed.size()-1]=1;
            n--;
        }
        
        int i=1;
        
        while(i<flowerbed.size()-1&&n>0)
        {
            if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0)
            {
                flowerbed[i]=1;
                n--;
            }
            
            i++;
        }
        
        if(n<=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};