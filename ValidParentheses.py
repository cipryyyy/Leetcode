class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for c in s:
            if c in ["(", "[", "{"]:
                stack.append(c)
            if len(stack) != 0:
                if c == ")":
                    if stack[-1] == "(":
                        stack.pop()
                    else:
                        return False
                if c == "]":
                    if stack[-1] == "[":
                        stack.pop()
                    else:
                        return False
                if c == "}":
                    if stack[-1] == "{":
                        stack.pop()
                    else:
                        return False
            else:
                return False
        if len(stack) == 0:
            return True
        return False
