func longestConsecutive(nums []int) int {
    mp := make(map[int]int)
    for _, value := range nums {
        mp[value] = 1;
    }
    ans := 0;
    // O (2N)
    for _, value := range nums {
        if _, ok := mp[value - 1]; !ok {
            copy_value := value + 1
            count := 1
            for {
                if _, flag := mp[copy_value]; !flag {
                    break
                }
                copy_value = copy_value + 1;
                count++
            }
            ans = max(ans, count)
        }
    }
    return ans
}
