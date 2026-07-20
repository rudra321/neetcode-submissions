class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int mid){
        long totalHours = 0;
        for(int pile: piles){
            totalHours += (pile+mid-1)/mid;
        }
        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // find k_min - min rate of eating banana per hour

        // piles [] - piles with piles[i] banana in them
        // can eat 

        // to eat any pile with x banana it will take [x/k]
        // find k such that 
        // k_max would be piles's maxima
        // 1 ... max(piles) -> k is here such that it finish all banana in <= h hours
        int upperMax=piles[0];
        for(int i=1; i<piles.size(); i++){
            if(piles[i]>upperMax) upperMax=piles[i];
        }

        int low = 1;
        int high = upperMax;
        int ans = upperMax;

        while(low <= high){
            int mid = low + (high-low)/2;
            if(canFinish(piles, h, mid)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
    

        // printf("brother %d", upperMax);




        return ans; 
    }
};
