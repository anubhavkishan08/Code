a = input()
#converting all elements of array to integer
a = (map(int,a.split()))

def permutation(start, end):
    if end==start:
        print(a)
        return
    for i in range(start, end+1):
        #swapping
        a[i],a[start] = a[start],a[i]
        #calling permutation function
        #by keeping the element at the index start fixed
        permutation(start+1, end)
        #restoring the array
        a[i],a[start] = a[start],a[i]
permutation(0,len(a)-1)