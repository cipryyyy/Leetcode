class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        left = x[:len(x)//2]
        right = x[len(x)//2:]
        if left == right[::-1]:
            return True
        if left == (right[1:])[::-1]:
            return True
        return False
