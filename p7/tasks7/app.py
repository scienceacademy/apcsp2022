from flask import Flask, render_template, request, redirect

app = Flask(__name__)

tasks = ["finish homework", "wash dishes", "feed the cats"]

@app.route("/", methods=["GET", "POST"])
def index():
    if request.method == "GET":
        return render_template("tasks.html", title="Tasks", tasks=tasks)
    if request.method == "POST":
        task = request.form.get("task")
        tasks.append(task)
        return redirect("/")

@app.route("/del")
def delete():
    n = int(request.args.get("id"))
    del tasks[n]
    return redirect("/")