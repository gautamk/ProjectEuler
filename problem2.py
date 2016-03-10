def fibonacci(max=100):
    first = 1
    second = 1
    yield second
    third = first + second
    while third < max:
        yield third
        first = second
        second = third
        third = first + second


print sum((x if x % 2 == 0 else 0 for x in fibonacci(4000000)))
