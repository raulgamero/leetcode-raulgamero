class Solution:
    def romanToInt(self, s: str) -> int:
        value = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        res = value[s[-1]]
        last = s[-1]
        for i in reversed(range(len(s)-1)):
            if value[s[i]] >= value[last]:
                res += value[s[i]]
            else:
                res -= value[s[i]]
            last = s[i]
        return res
            