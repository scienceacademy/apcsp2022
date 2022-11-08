
try:
    x = int(input("x: "))
except ValueError:
    print("That's not a number")
y = int(input("y: "))
print(f"x + y = {x + y}")
# integer division
z = x / y
print(f"x / y = {z:.50f}")