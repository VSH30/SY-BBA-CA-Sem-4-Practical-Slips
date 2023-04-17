<?php
    $user = $_GET['user'];

    if(empty($user))
        echo "Enter Username";
    else if(strlen($user)<3)
        echo "Username is too short";
    else
        echo "Valid Username";
?>