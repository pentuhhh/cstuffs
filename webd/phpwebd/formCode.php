<?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $uname = $_POST['fullname'];
        $course = $_POST['course'];
        $email = $_POST['email'];
        $school = $_POST['school'];
        $whyusc = $_POST['whyusc'];

        echo "Full name: " . $uname . "<br>";
        echo "Course: " . $course . "<br>";
        echo "Email address: " . $email . "<br>";
        echo "Previous school: " . $school . "<br>";
        echo "Why did you choose USC: " . $whyusc . "<br>";
    }
?>
