class Solution:
    def licenseKeyFormatting(self, S: str, K: int) -> str:
        S = ''.join(S.split("-")).upper()
        result = []

        if len(S) % K != 0:
            result.append(S[:(len(S) % K)])
        for i in range(len(S) % K, len(S), K):
            result.append(S[i:(i + K)])
            
        return '-'.join(result)
