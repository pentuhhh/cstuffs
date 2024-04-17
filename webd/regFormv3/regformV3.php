<?php

//Pazon BS-CS 1 MW 7:30-10:30

$uname = '';
$course = '';
$email = '';
$school = '';
$whyusc = '';

$host = 'localhost';
$user = 'user2';
$password = 'password123';
$dbName = 'regform';

$conn = new mysqli($host, $user, $password, $dbName);

if ($conn->connect_error){
    die("connection failed" . $conn->connect_error);
}


if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if (isset($_POST['submitbtn'])) {
        $uname = isset($_POST['fullname']) ? $_POST['fullname'] : '';
        $course = isset($_POST['course']) ? $_POST['course'] : '';
        $email = isset($_POST['email']) ? $_POST['email'] : '';
        $school = isset($_POST['school']) ? $_POST['school'] : '';
        $whyusc = isset($_POST['whyusc']) ? $_POST['whyusc'] : '';

        $sql = "insert into user(fullName, course, email, school, whyUsc) values ('$uname', '$course', '$email', '$school', '$whyusc'); ";

        mysqli_query($conn, $sql);

    }
}

?>

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
                        <input type="text" class="form-control" id="fullname" name="fullname" value="<?php echo htmlspecialchars($uname); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="course" class="form-label">Course</label>
                        <input type="text" class="form-control" id="course" name="course" value="<?php echo htmlspecialchars($course); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="emailadd" class="form-label">Email Address</label>
                        <input type="text" class="form-control" id="email" name="email" value="<?php echo htmlspecialchars($email); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="Previous school" class="form-label">Previous School</label>
                        <input type="text" class="form-control" id="school" name="school" value="<?php echo htmlspecialchars($school); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="whyusc" class="form-label">Why did you choose USC</label>
                        <textarea class="form-control" id="whyusc" name="whyusc" rows="2"><?php echo htmlspecialchars($whyusc); ?></textarea>
                    </div>
                    <button type="submit" name="submitbtn">Submit</button>
                </form>
            </div>

            <div class="col-4">
                <h2>User Details</h2><br><br>
                <h6>
                    Full name: <p id="returnname"><?php echo htmlspecialchars($uname); ?></p><br><br>
                    Course: <p id="returncourse"><?php echo htmlspecialchars($course); ?></p><br><br>
                    Email address: <p id="returnemail"><?php echo htmlspecialchars($email); ?></p><br><br>
                    Previous school: <p id="returnschool"><?php echo htmlspecialchars($school); ?></p><br><br>
                    Why did you choose USC: <p id="returnwhy"><?php echo htmlspecialchars($whyusc); ?></p>
                </h6>
                <button type="button" onclick="reset();" id="resetbtn">Clear</button>
            </div>
        </div>
    </div>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
</body>
</html>
