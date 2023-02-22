from flask import Flask, render_template, request, redirect

app = Flask(__name__)

tasks = ["wash dishes", "do homework", "feed cat"]

@app.route("/")
def index():
    return render_template("tasks.html", title="Tasks", tasks=tasks)

@app.route("/del")
def delete():
    n = int(request.args.get("id"))
    del tasks[n]
    return redirect("/")