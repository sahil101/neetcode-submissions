func groupAnagrams(strs []string) [][]string {
    res := make(map[[26]int][]string)

    for _, value := range strs {
        var count [26]int
        for _, c := range value {
            count[c - 'a']++
        }
        res[count] = append(res[count], value)
    }

    var result [][]string

    for _, group := range res {
        result = append(result, group)
    }
    return result
}
