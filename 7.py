class Solution(object):
    def reverse(self, x):
        sign = 1 if x >= 0 else -1
        out = ""
        for i in range(len(str(abs(x)))):
            out += str(x)[-(i + 1)]

        return 0 if ((int(out) * sign) > (pow(2, 31) - 1) or (int(out) * sign) < -pow(2, 31)) else (int(out) * sign)
        
