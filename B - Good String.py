# cook your dish here
t = int(input())

for _ in range(t):
    s = input()
    n = len(s)
    freq = {}
    for i in range(n//2):
        freq[s[i]] = freq.get(s[i], 0) + 1
        freq[s[n-i-1]] = freq.get(s[n-i-1], 0) - 1
    lapindrome = all(val == 0 for val in freq.values())
    print("YES" if lapindrome else "NO")
