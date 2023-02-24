t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    streak = 0
    maxim = 0
    for i in range(n):
        if a[i]==0 or b[i]==0:
            if streak > maxim:
                maxim = streak
            streak = 0
        else:
            streak += 1
    
    if streak > maxim:
            maxim = streak
    print(maxim)
