func twoSum(nums []int, target int) []int {
    size_nums := len(nums)

    mp := make(map[int]int)

    for i := 0 ;i < size_nums; i++ {
        k := target - nums[i]

        if index, ok := mp[k]; ok {
            return []int{ index, i }
        }
        mp[nums[i]] = i
    }
    return []int{-1, -1}
}
