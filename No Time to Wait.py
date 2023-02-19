# cook your dish here


n, h, x = map(int, input().split())
lst = list(map(int, input().split()))

for t in lst:
    if t + x >= h:
        print("YES")
        break
else:
    print("NO")
