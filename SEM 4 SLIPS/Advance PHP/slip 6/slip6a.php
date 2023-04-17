<?php
    //scheme host path
    header("Content-type:text/plain"); 
    $x = "http://www.college.com/Science/CS.php";
    $a = parse_url($x);
    echo "\nScheme = ".$a['scheme'];
    echo "\nHost = ".$a['host'];
    echo "\nPath = ".$a['path'];
?>