class Solution:
    def firstUniqChar(self, s: str) -> int:
        solos = dict()
        muls = []
        for e in range(len(s)):
            if s[e] not in muls:
                if s[e] not in solos.keys():
                    solos[s[e]] = e
                else:
                    solos.pop(s[e])
                    muls.append(s[e])
        if len(solos.keys()) == 0:
            return -1
        return min(solos.values())
