names = ['JANE', 'p@ul', 'JANE', 'lHhhhh']
#print(list('*' if c.lower() in 'aeiou' else c for c in 'JANE'))

no_vowels = list(map(lambda x: ''.join('*' if c.lower() in 'aeiou' else c for c in x), names))
print(no_vowels)
titled = list(map(lambda x: x.title(), no_vowels))
print(titled)

#n = int(input())
#names = [input().strip() for _ in range(n)]
#print(names)

#names = ['john1', 'JANE', 'p@ul', 'JANE', 'Hhhhh']

#print(list(c.isdigit() for c in 'John'))

#no_numbers = list(filter(lambda x: not any(c.isdigit() for c in x), names))
#print(no_numbers)



#########################################
#strings = ['PYP', 'TEST', 'MALAYALAM', 'NITIN']

# is_palindrome = lambda s: s == s[::-1]
# print(is_palindrome(strings[1]))

#palindromes = list(filter(lambda s: s == s[::-1], strings))
#print(palindromes)

#sorted_pal = sorted(palindromes, key=lambda s: s[1], reverse=False)
#print(sorted_pal)
