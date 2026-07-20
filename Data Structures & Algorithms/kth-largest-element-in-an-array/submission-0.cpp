class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int num : nums) {
            // Put the current number into our "queue"
            minHeap.push(num);
            
            // If we have more than k elements, kick out the smallest one (the top)
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        // The top of the heap is the smallest of our top k elements, 
        // which makes it the Kth largest element overall!
        return minHeap.top();
    }
};
