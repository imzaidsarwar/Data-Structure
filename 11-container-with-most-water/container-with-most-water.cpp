class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxArea = 0;
        int area = 0;
        int start = 0;
        int end = height.size() -1;
        
        while(start < end)
        {
            area = (end - start) * min(height[start], height[end]);
            maxArea = max(area, maxArea);

            if(height[start] < height[end])
                start++;
            
            else
                end --;
            
        }
        // for(int end = size-1; end >= 0; end--)
        // {
        //     for(int start = 0; start < size; start++)
        //     {
        //         area = (end - start) * min(height[start], height[end]);
        //         maxArea = max(area, maxArea);
        //     }
        // }

        return maxArea;
    }
};