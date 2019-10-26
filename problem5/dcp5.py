def cons(a, b):
    def pair(f):
        return f(a, b);
    return pair

def car(pair):
#    return pair(lambda x, y: x)
    def left(left, right):
        return left
    return pair(left)

def cdr(pair):
#    return pair(lambda x, y: y)
    def right(left, right):
        return right
    return pair(right)

print(car(cons(3, 4)))
print(cdr(cons(3, 4)))
