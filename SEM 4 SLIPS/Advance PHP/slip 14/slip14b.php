<?php
    $user = $_POST['userid'];
    $pass = $_POST['pass'];

    $conn = mysqli_connect("localhost","root","","slip14");
    $res = mysqli_query($conn,"SELECT pass FROM users WHERE uid='$user'");
    $row = mysqli_fetch_assoc($res);

    if(!empty($row))
        echo ($row['pass']==$pass) ? "VALID LOGIN INFO" : "INVALID PASSWORD";
    else
        echo "INVALID User ID";
?>