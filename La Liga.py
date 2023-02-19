# cook your dish here
# cook your dish here
t = int(input())

for _ in range(t):
    
    diction = {}
    for i in range(4):
        name, score = input().split()
        diction[name] = int(score)
        
    
    if diction["RealMadrid"] < diction["Malaga"] and diction["Barcelona"] > diction["Eibar"]:
        print("Barcelona")
    
    else:
        print("RealMadrid")
