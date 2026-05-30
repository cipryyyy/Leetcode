class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        CtO = {")" : "(", "]" : "[", "}" : "{"}
        for c in s:
            if c in ["(", "[", "{"]:
                stack.append(c)
            if c in CtO.keys():
                if len(stack) == 0:
                    return False
                if CtO.get(c) != stack[-1]:
                    return False
                stack.pop()
        if len(stack) != 0:
            return False
        return True
