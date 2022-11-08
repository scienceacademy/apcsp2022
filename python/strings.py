name = input("Name: ")

vowels = 0
for c in name:
    if c in "aeiou":
        vowels += 1

print(vowels)