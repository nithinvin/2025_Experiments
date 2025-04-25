from cryptography.fernet import Fernet

key = Fernet.generate_key()
print("key is", key)
f = Fernet(key)

token = f.encrypt(b"My secret message")
print("Encrypted:", token)

print("Decrypted:", f.decrypt(token))

