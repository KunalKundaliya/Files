class Solution:
    def __init__(self, nums1, nums2):
        self.nums1 = nums1
        self.nums2 = nums2

    def findMedianSortedArrays(self):
        nums = sorted(self.nums1 + self.nums2)
        length = len(nums)
        if length % 2 == 0:
            return (nums[length // 2 - 1] + nums[length // 2]) / 2
        else:
            return nums[length // 2]


nums1 = list(map(int, input("Enter 1st List: ").split()))
nums2 = list(map(int, input("Enter 2nd List: ").split()))
sol = Solution(nums1, nums2).findMedianSortedArrays()
print(f"Median of the two sorted arrays is: {sol}")
