func maxProfit(prices []int) int {
	profit := 0
	lastPrice := math.MaxInt

	for _, price := range prices {

		lastPrice = min(lastPrice, price)
		profit = max(profit, price - lastPrice)
	}
	return profit
}
