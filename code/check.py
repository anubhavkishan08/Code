for _ in range(int(input())):
    x, y, z = map(int, input().split(" "))
    a, b, c = 0, 0, z
    while c != 1:
        if x%c == 0:
            x-=1
            a+=1
        else:
            c -= 1
            c=z
    while c != 1:
        if y%c == 0:
            y-=1
            b+=1
        else:
            c -= 1
print(a, b)

