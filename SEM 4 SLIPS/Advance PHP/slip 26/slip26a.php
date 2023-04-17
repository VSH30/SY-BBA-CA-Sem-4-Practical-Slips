<?php
    $a = $_GET['a'];
    $b = $_GET['b'];
    if(!empty($a) && !empty($b)){
        echo "$a + $b = ".($a+$b);
    }
?>