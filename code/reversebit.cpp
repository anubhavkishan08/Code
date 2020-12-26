#define reverseBits(num,bitSize):
 binary = bin(num)
     reverse1 = binary[-1:1:-1]
     reverse1 = reverse1 + (bitSize - len(reverse1))*'0'
print int(reverse1,2)


if __name__ == "__main__":
    num = 1
    bitSize = 32
    reverseBits(num,bitSize)
