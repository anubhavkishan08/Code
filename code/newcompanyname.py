a=int(input())
at=[]
hh=0
for i in range(a):
    for j in range(a):
        hh=i+j
        if(hh%2!=0 or hh%3!=0 or hh%5!=0 or hh%7!=0 or hh==2 or hh==3 or hh==5 or hh==7):
            ll=[i,j]
            ll=sorted(ll)
            if (ll) not in at:
                at.append(ll)
                print(ll)
print(len(at))

