class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        left =0 
        right =0
        window_sum =0

        max_sum =float("-inf")

        while (right < len(nums)):
            window_sum += nums[right]

            if right - left +1 == k:

                max_sum = max(max_sum,window_sum)

                window_sum -= nums[left]
                left+=1

            right +=1

        return max_sum/k

       
        