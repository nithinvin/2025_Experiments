def my_decorator(func):
    def wrapper():        
        print("Before the function runs.")
        func()
        print("After the function runs.")
    return wrapper

@my_decorator
def say_hello():
    print("Hello!")
say_hello()

#new_wrapper = my_decorator(say_hello)
#new_wrapper()

#def wrapper():        
#    print("Before the function runs.")
#    say_hello()
#    print("After the function runs.")
#wrapper()



######################
#def say_hello():
#    print("Hello!")

#def say_idiot():
#    print("Idiot")

#def wrapper(func):
#    print("Before the function runs.")
#    func()
#    func()
#    print("After the function runs.")
#wrapper(say_hello)
#wrapper(say_idiot)