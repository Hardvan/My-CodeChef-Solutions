# cook your dish here

t = int(input())

for _ in range(t):
    
    n = int(input())
    a = list(map(int , input().split()))
    
    maxim = a[0] + a[-1]
    
    for i in range(n): # n Right Rotations
        
        # Right Rotating
        x = a.pop(-1)
        a.insert(0, x)
        
        elem = a[0] + a[-1]
        if elem > maxim:
            maxim = elem
    
    print(maxim)
