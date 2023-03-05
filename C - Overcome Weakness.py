# cook your dish here
t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    if(x<y):
        print("first")
    elif(x==y):
        print("any")
    else:
        print("second")
        
