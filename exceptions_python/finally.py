try:
    file = open("test.txt", "r")
    data = file.read()
except FileNotFoundError:
    print("File not found.")
finally:
    print("Closing the program.")

