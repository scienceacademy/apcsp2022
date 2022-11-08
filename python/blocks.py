while True:
    try:
        num = int(input("Number: "))
    except:
        continue
    if 0 < num <= 10:
        break

for j in range(num):
    print("?" * num)