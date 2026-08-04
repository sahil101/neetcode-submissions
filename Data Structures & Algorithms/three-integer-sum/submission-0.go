func threeSum(nums []int) [][]int {
	// O (NLogN)
	sort.Slice(nums, func(i ,j int) bool {
		return nums[i] < nums[j]
	})
	ans := [][]int{}
	size := len(nums)

	for i := 0; i < size - 2; i++ {
		if i > 0 && nums[i] == nums[i-1] {
			continue
		}
		sum := -(nums[i])
		left := i + 1
		right := size - 1
		for left < right {
			sum3 := nums[left] + nums[right]
			if sum3 == sum {
				triplet := []int{nums[i], nums[left], nums[right]}
				ans = append(ans, triplet)
				left++
				right--
				// skip duplicates for left and right
				for left < right && nums[left] == nums[left-1] {
					left++
				}
				for left < right && nums[right] == nums[right+1] {
					right--
				}
			} else if sum3 > sum {
				right--
			} else {
				left++
			}
		}
	}

	return ans
}
