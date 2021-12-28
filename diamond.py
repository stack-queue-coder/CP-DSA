k=11
m=0
n=5
while n!= 0:
    
    while k>=1:
        print("*" * m, end="")
        print(" " * (k-2), end="")
        print("*" * m, end="\n")
        m=m+1
        k=k-2
        n=n-1
        #print(m,n,k)
