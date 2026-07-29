func productExceptSelf(nums []int) []int {
    mul := 1;
    size := len(nums)
    res := make([]int, size)

    for index, value := range nums {
        res[index] = mul;
        mul = mul * value;
    }
    mul = 1
    for i := size - 1; i>= 0; i-- {
        res[i] *= mul;
        mul = mul * nums[i]
    }
    return res
}
