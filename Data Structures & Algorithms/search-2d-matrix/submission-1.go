func searchMatrix(matrix [][]int, target int) bool {
	row := len(matrix)
	column := len(matrix[0])
	low := 0
	high := row * column - 1
	for low <= high {
		mid := (low + high) / 2
		row_cal := mid / column
		col_cal := mid % column
		if matrix[row_cal][col_cal] == target {
			return true
		} else if matrix[row_cal][col_cal] > target {
			high = mid - 1
		} else {
			low = mid + 1
		} 
	}
	return false
}
