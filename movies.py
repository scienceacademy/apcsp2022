from cs50 import SQL

db = SQL("sqlite:///movies.db")
x = 10
result = db.execute("SELECT title, year FROM movies LIMIT ?", x)

print(result)