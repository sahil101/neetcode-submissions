func hasDuplicate(nums []int) bool {
    mp := make(map[int]bool)

    for i := 0 ; i < len(nums) ; i++ {
        if _, ok := mp[nums[i]]; ok {
            return true
        }
        mp[nums[i]] = true
    }
    return false
}
