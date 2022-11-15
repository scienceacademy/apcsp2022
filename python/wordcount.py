from string import punctuation
wordcount = {}

with open("alice.txt", "r") as f:
    data = f.read()
    words = data.split()
    for word in words:
        word = word.lower()
        for char in punctuation + '“”’—':
            word = word.replace(char, "")
        if word in wordcount:
            wordcount[word] += 1
        else:
            wordcount[word] = 1

print(len(wordcount))
while True:
    w = input("Word: ")
    if w == "qq":
        break
    print(wordcount.get(w))