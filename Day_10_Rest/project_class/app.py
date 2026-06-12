from flask import Flask, request, render_template
import subprocess

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/submit', methods=['POST'])
def submit():
    action = request.form.get('action')

    with open('input.txt', 'w') as f:
        if action == 'signup':
            f.write("signup\n")
            f.write(f"{request.form['name']}\n")
            f.write(f"{request.form['roll']} {request.form['mail']} {request.form['marks']} {request.form['id']} {request.form['pass']}\n")
        elif action == 'login':
            f.write("login\n")
            f.write(f"{request.form['id']} {request.form['pass']}\n")

    subprocess.run(["g++", "cpp/student.cpp", "-o", "cpp/student"])
    subprocess.run(["./cpp/student"])

    with open("output.txt", "r") as f:
        result = f.read()

    return render_template("index.html", result=result)

if __name__ == '__main__':
    app.run(debug=True)
