const btn = document.getElementById("submitbtn");


function display(){
    const uname = document.getElementById('fullname').value;
    const course = document.getElementById('course').value;
    const email = document.getElementById('email').value;
    const school = document.getElementById('school').value;
    const whyusc = document.getElementById('whyusc').value;


    document.getElementById('returnname').textContent = uname;
    document.getElementById('returncourse').textContent = course;
    document.getElementById('returnemail').textContent = email;
    document.getElementById('returnschool').textContent = school
    document.getElementById('returnwhy').textContent = whyusc;


}

function reset(){
    document.getElementById('returnname').textContent = "";
    document.getElementById('returncourse').textContent = "";
    document.getElementById('returnemail').textContent = "";
    document.getElementById('returnschool').textContent = ""
    document.getElementById('returnwhy').textContent = "";
}