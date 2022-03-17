n = 5

def test():
    counter = 0
    for i in range(1, n+1):
        for j in range(n):
            counter = counter + i * i
    print(counter)

test()