<?php

//Pazon BS-CS 1 MW 7:30-10:30

$fname = '';
$lname = '';
$mname = '';
$uage = '';
$age = 0;



$host = 'localhost';
$user = 'user2';
$password = 'password123';
$dbName = 'calcbday';

$conn = new mysqli($host, $user, $password, $dbName);

function getAge($birthday){
    if (!empty($birthday)) {
        $birthday = date_create($birthday);
        $today = date_create(date('Y-m-d'));
        $diff = date_diff($birthday, $today);
        $uage = (int)$diff->format('%y');
    } else {
        $uage = 0;
    }

    return $uage;
}

function insertInto($fname, $lname, $mname, $uage, $conn){
    $sql = "insert into users(firstname, lastname, middlename, age) values ('$fname', '$lname', '$mname', '$uage')";
    mysqli_query($conn, $sql);
}

if ($conn->connect_error){
    die("connection failed" . $conn->connect_error);
}


    

    if (isset($_POST['submitbtn'])) {
        $fname = isset($_POST['firstname']) ? $_POST['firstname'] : '';
        $lname = isset($_POST['lastname']) ? $_POST['lastname'] : '';
        $mname = isset($_POST['middlename']) ? $_POST['middlename'] : '';
        $birthday = isset($_POST['birthday']) ? $_POST['birthday'] : '';

        $age = getAge($birthday);
        

        insertInto($fname, $lname, $mname, $age, $conn);

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
                        <label for="firstname" class="form-label"><p class="text-start">First Name</p></label>
                        <input type="text" class="form-control" id="firstname" name="firstname" value="<?php echo htmlspecialchars($fname); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="lastname" class="form-label">Last Name</label>
                        <input type="text" class="form-control" id="lastname" name="lastname" value="<?php echo htmlspecialchars($lname); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="middlename" class="form-label">Middle Name</label>
                        <input type="text" class="form-control" id="middlename" name="middlename" value="<?php echo htmlspecialchars($mname); ?>">
                    </div>
                    <div class="mb-3">
                        <label for="middlename" class="form-label">Age</label>
                        <input type="date" id="birthday" name="birthday">

                    </div>
                
                    <button type="submit" name="submitbtn">Submit</button>
                </form>
            </div>

            <div class="col-4">
                <h2>User Details</h2><br><br>
                <h6>
                    First Name: <p id="retfname"><?php echo htmlspecialchars($fname); ?></p><br><br>
                    Last Name: <p id="retlname"><?php echo htmlspecialchars($lname); ?></p><br><br>
                    Middle Name: <p id="retmname"><?php echo htmlspecialchars($mname); ?></p><br><br>
                    Age: <p id="retage"><?php echo htmlspecialchars($age);?></p><br><br><br>
                    
                </h6>
                <button type="button" onclick="reset();" id="resetbtn">Clear</button>
            </div>
        </div>
    </div>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
</body>
</html>
