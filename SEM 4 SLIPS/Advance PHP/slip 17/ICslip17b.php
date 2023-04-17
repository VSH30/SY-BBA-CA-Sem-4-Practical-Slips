<?php
//INCOMPLETE
$x = simplexml_load_file("University.xml");
    foreach($x as $y){
        echo "<br><br>";
        foreach($y as $z){
            echo "| $z |";
        }
    }
?>