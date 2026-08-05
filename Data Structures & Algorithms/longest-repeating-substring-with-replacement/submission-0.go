func characterReplacement(s string, k int) int {
	size := len(s)	
	start := 0
	parser := 0
	mp := make(map[byte]int)
	maxFreq := math.MinInt
	longest := 0
	for (parser < size) {
		mp[s[parser]]++
		maxFreq = max(maxFreq, mp[s[parser]])		
		for (parser - start + 1) - maxFreq > k {
			mp[s[start]]--
			maxFreq = max(maxFreq, mp[s[start]])
			start++
		}
		longest = max(longest, parser - start + 1)
		parser++
	}
	return longest
}
