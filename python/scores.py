n = int(input("How many: "))

scores = []
for i in range(n):
    scores.append(int(input("Score: ")))

average = sum(scores) / len(scores)
print(f"Average: {average}")