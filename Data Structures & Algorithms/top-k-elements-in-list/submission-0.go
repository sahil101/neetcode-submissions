func topKFrequent(nums []int, k int) []int {
    freq_map := make(map[int]int) 

        for _, num := range nums {
            freq_map[num]++
        }

        var list [][]int

        for key, value := range freq_map {
            list = append(list, []int{key, value})
        }

        sort.Slice(list, func(i, j int) bool {
            return list[i][1] > list[j][1]
        })

        var res []int
        for i := 0 ;i < k; i++ {
            res = append(res, list[i][0])
        }
return res

}
