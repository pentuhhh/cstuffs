<?php 

$user = 'user2';
$host = 'localhost';
$db = 'studs';
$password = 'password123';

$conn = new mysqli($host, $user, $password, $db);


?>

<!DOCTYPE html>
    <head>
        <title> Retrieve information </title>
    </head>

    <body>

        <form>
            <label>Name</label>
            <input type='text' id='name' name='fname'></br>
            <label>course</label>
            <input type='text' id='course' course='course'></br>
        </form>

        

    </body>
</html>
