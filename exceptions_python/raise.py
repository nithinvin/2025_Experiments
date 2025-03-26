def myfunc():
    x = -1
    if x < 0:
        raise ValueError("Negative numbers are not allowed")

def anotherfunc():
    try:
        myfunc()
    except ValueError as e:
        print(e)

anotherfunc()
