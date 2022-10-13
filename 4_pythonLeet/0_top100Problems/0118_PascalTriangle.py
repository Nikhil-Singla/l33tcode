class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 0: return [] ## Base case with no elements
        elif numRows == 1: return [[1]] ## Base case for 1 element
        Tri = [[1]] ## initializing first row of the overall triangle
        for i in range(1,numRows): ## Running the list for each row
            row = [1] ## First term of each row is a 1
            for j in range(1,i):
                row.append(Tri[i-1][j-1] + Tri[i-1][j]) ## Each element is the sum of the above two elements 
            row.append(1) ## Ending element in pascals triangle
            Tri.append(row) ## Appending row to overall triangle
        return Tri ## Returning the required triangle
            