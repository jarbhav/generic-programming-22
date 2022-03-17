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