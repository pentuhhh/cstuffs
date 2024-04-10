<!DOCTYPE html>
<html>
<head>
    <title>Registration Form</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
</head>
<body>
    <div class="container text-start">
        <div class="row align-items-start">
            <div class="col-6" id="colum1">
                <h2>Registration Form</h2><br>
                <form method="post">
                    <div class="mb-3">
                        <label for="fullname" class="form-label"><p class="text-start">Full Name</p></label>
                        <input type="text" class="form-control" id="fullname" name="fullname">
                    </div>
                    <div class="mb-3">
                        <label for="course" class="form-label">Course</label>
                        <input type="text" class="form-control" id="course" name="course">
                    </div>
                    <div class="mb-3">
                        <label for="email" class="form-label">Email Address</label>
                        <input type="text" class="form-control" id="email" name="email">
                    </div>
                    <div class="mb-3">
                        <label for="school" class="form-label">Previous School</label>
                        <input type="text" class="form-control" id="school" name="school">
                    </div>
                    <div class="mb-3">
                        <label for="whyusc" class="form-label">Why did you choose USC</label>
                        <textarea class="form-control" id="whyusc" name="whyusc" rows="2"></textarea>
                    </div>
                    <button type="submit" name="submitbtn" id="submitbtn">Submit</button>
                </form>
            </div>
            <div class="col-4">
                <h2>User Details</h2><br><br>
                <h6>
                    Full name: <p id="returnname"><?php echo isset($_POST['fullname']) ? $_POST['fullname'] : ''; ?></p><br><br>
                    Course: <p id="returncourse"><?php echo isset($_POST['course']) ? $_POST['course'] : ''; ?></p><br><br>
                    Email address: <p id="returnemail"><?php echo isset($_POST['email']) ? $_POST['email'] : ''; ?></p><br><br>
                    Previous school: <p id="returnschool"><?php echo isset($_POST['school']) ? $_POST['school'] : ''; ?></p><br><br>
                    Why did you choose USC: <p id="returnwhy"><?php echo isset($_POST['whyusc']) ? $_POST['whyusc'] : ''; ?></p>
                </h6>
                <button type="button" onclick="reset();" id="resetbtn">Clear</button>
            </div>
        </div>
    </div>
    <script>
        function reset() {
            document.getElementById('fullname').value = '';
            document.getElementById('course').value = '';
            document.getElementById('email').value = '';
            document.getElementById('school').value = '';
            document.getElementById('whyusc').value = '';
            document.getElementById('returnname').textContent = '';
            document.getElementById('returncourse').textContent = '';
            document.getElementById('returnemail').textContent = '';
            document.getElementById('returnschool').textContent = '';
            document.getElementById('returnwhy').textContent = '';
        }
    </script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
</body>
</html>
<!DOCTYPE html>
<html>
<head>
    <title>Registration Form</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
</head>
<body>
    <div class="container text-start">
        <div class="row align-items-start">
            <div class="col-6" id="column1">
                <h2>Registration Form</h2><br>
                <form method="post">
                    <div class="mb-3">
                        <label for="fullname" class="form-label"><p class="text-start">Full Name</p></label>
                        <input type="text" class="form-control" id="fullname" name="fullname">
                    </div>
                    <div class="mb-3">
                        <label for="course" class="form-label">Course</label>
                        <input type="text" class="form-control" id="course" name="course">
                    </div>
                    <div class="mb-3">
                        <label for="email" class="form-label">Email Address</label>
                        <input type="text" class="form-control" id="email" name="email">
                    </div>
                    <div class="mb-3">
                        <label for="school" class="form-label">Previous School</label>
                        <input type="text" class="form-control" id="school" name="school">
                    </div>
                    <div class="mb-3">
                        <label for="whyusc" class="form-label">Why did you choose USC</label>
                        <textarea class="form-control" id="whyusc" name="whyusc" rows="2"></textarea>
                    </div>
                    <button type="submit" name="submitbtn">Submit</button>
                </form>
            </div>
            <div class="col-4">
                <h2>User Details</h2><br><br>
                <h6>
                    Full name: <p id="returnname"><?php echo isset($_POST['fullname']) ? $_POST['fullname'] : ''; ?></p><br><br>
                    Course: <p id="returncourse"><?php echo isset($_POST['course']) ? $_POST['course'] : ''; ?></p><br><br>
                    Email address: <p id="returnemail"><?php echo isset($_POST['email']) ? $_POST['email'] : ''; ?></p><br><br>
                    Previous school: <p id="returnschool"><?php echo isset($_POST['school']) ? $_POST['school'] : ''; ?></p><br><br>
                    Why did you choose USC: <p id="returnwhy"><?php echo isset($_POST['whyusc']) ? $_POST['whyusc'] : ''; ?></p>
                </h6>
            </div>
        </div>
    </div>
</body>
</html>