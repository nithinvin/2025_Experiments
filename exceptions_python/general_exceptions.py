try:
    x = int("hello")  # This causes a ValueError
except Exception as e:
    print("An error occurred:", e)  # Prints the actual error message

