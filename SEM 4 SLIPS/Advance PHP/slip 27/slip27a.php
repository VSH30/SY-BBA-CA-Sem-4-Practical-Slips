<?php
    $num = $_GET['num'];
    $fact = 1;
    $hint = "Factorial of $num = ";
    for($i=1;$i<=$num;$i++){
        $fact *= $i;
    }
    if(!empty($num))
        $hint .= $fact;

    echo $hint;
?>