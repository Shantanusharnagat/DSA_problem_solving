import heapq
def maxSquaresSum(nums, k):
    MOD = 10**9 + 7
    n = len(nums)

    # Create a max heap to maintain the largest elements
    max_heap = [-num for num in nums]
    heapq.heapify(max_heap)

    while k > 0:
        # Get the largest element from the max heap
        largest = -heapq.heappop(max_heap)

        # Perform the operation by dividing the largest element by 2
        largest //= 2

        # Push the updated element back into the max heap
        heapq.heappush(max_heap, -largest)

        k -= 1

    # Calculate the maximum sum of squares modulo 10^9 + 7
    max_sum = sum(num**2 for num in max_heap) % MOD
    return max_sum
nums = [2, 6, 5, 8]
k = 2
result = maxSquaresSum(nums, k)
print(result)