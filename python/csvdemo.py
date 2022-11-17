import csv

data = []
with open("data.csv") as f:
    reader = csv.DictReader(f)
    for row in reader:
        data.append(row)

for row in data:
    print(row["Month"], row["2019"])

print(max([row["2020"] for row in data]))