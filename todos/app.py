from flask import Flask, render_template, request, redirect, session

app = Flask(__name__)
app.secret_key = "abcd"
username = "bradfield"
password = "1234"

def load_tasks():
    with open("tasks.save", "r") as f:
        for line in f:
            tasks.append(line)

def save_tasks():
    with open("tasks.save", "w") as f:
        for task in tasks:
            f.write(f"{task}\n")

tasks = []
load_tasks()

@app.route("/")
def index():
    if not logged_in():
        return redirect("/login")
    return render_template("tasks.html", title="Tasks", tasks=tasks)

@app.route("/del")
def delete():
    if not logged_in():
        return redirect("/login")
    n = int(request.args.get("id"))
    del tasks[n]
    save_tasks()
    return redirect("/")

@app.route("/add", methods=["GET", "POST"])
def add():
    if not logged_in():
        return redirect("/login")
    if request.method == "GET":
        return render_template("add.html", title="Add a task")
    if request.method == "POST":
        task = request.form.get("task")
        if task != "":
            tasks.append(task)
            save_tasks()
        return redirect("/")

def logged_in():
    return "username" in session

@app.route("/login", methods=["GET", "POST"])
def login():
    if request.method == "POST":
        user = request.form.get("username")
        passwd = request.form.get("password")
        if user == username and passwd == password:
            session["username"] = username
            return redirect("/")
        else:
            return redirect("/login")
    return render_template("login.html", title="Login")

@app.route("/logout")
def logout():
    session.pop("username")
    return redirect("/login")