<?php
    $name=$_GET['name'];
    $age=$_GET['age'];
    $c=$_GET['c'];

    $hint ="";
    if(preg_match("/^([A-Z' ]+)$/",$name))
        $hint.="<br>Name is Valid";
    else
        $hint.="<br>Name is Invalid";
    if($age<18)
        $hint.="<br>Age is Less than 18";
    else
        $hint.="<br>Age is Valid";

    if($c=="India" || $c=="india" || $c=="INDIA")
        $hint.="<br>Country is Valid!!!";
    else
        $hint.="<br>Country is Not Valid!!!";

    echo $hint;
?>