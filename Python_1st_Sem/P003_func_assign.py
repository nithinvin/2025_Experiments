def hello(name):
    print('Hello', name)

hi = hello
print(type(hello))
hello('Bob')
hi('Alice')