x = 10

def f():
    print("f() -> x =", x)

def g():
    x = 20 
    f()    

g()
