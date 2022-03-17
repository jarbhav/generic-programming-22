class A:
    def foo(self):
        print("foo of A")

class B:
    def foo(self):
        print("foo of B")

def caller(x):
    x.foo()

a = A()
b = B()
caller(a)
caller(b)

'''
a single caller function is enough for both the classes 
because python has something called duck typing
in C++ this would not hav been possible

****Learn more about this****
'''