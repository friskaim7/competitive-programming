input() # to handle the N
arr = input().strip().split()   # to get the array
count = [0] * 6 # the type is guaranteed to be 1...5

for bird in arr:
    count[int(bird)] += 1
    
print(count.index(max(count)))
