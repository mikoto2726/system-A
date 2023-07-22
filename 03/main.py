def add1(v): return v+1

def main():
    v = 1
    #while v<0xffffffff:
    while v< 0xffffff:
        v = add1(v)
    print(v)

main()
