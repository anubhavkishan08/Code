for i in range(3):
    n = int(input())
    bin_number = bin(n)
    reverse_number = bin_number[-1:1:-1]
    bit_size=32
    reverse_number = reverse_number + (bit_size - len(reverse_number))*'0'
    print (int(reverse_number,2))  