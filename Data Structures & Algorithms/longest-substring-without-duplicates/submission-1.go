func lengthOfLongestSubstring(s string) int {
	mp := make(map[byte]int)
	start := 0
	parser := 0
	lengthOfSubstring := 0
	size := len(s)

	for parser < size {
		if _, value := mp[s[parser]]; value {
			if (start <= mp[s[parser]]) {
				start = mp[s[parser]] + 1
			}
		}
		mp[s[parser]] = parser
		lengthOfSubstring = max(lengthOfSubstring, parser - start + 1)  
		parser++
	}
	return lengthOfSubstring
}
