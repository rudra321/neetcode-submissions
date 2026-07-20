class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for(int num: nums){
            freqMap[num]++;
        }
        /*{
            1:6,
            2:4,
            4:5
        }*/

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for(auto& pair: freqMap){
            int num = pair.first;
            int freq = pair.second;
            minHeap.push({freq, num});
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> res;
        while (!minHeap.empty()) {
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return res;
    }
};
