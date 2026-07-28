func isAnagram(s string, t string) bool {
    if len(s) != len(t) {
        return false
    }

    size_arr := len(s)
    char_arr := make([]int, 26)

    for i := 0 ;i < size_arr ;i++ {
        char_arr[s[i] - 'a']++;
    }

    for i := 0 ;i < size_arr ;i++ {
        if char_arr[t[i] - 'a'] == 0 {
            return false 
        }
        char_arr[t[i] - 'a']--;
     }

     return true
}
