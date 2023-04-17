<?php
    $xml = simplexml_load_file('College.xml');
    foreach($xml as $y){
        echo "<br>";
        foreach($y as $a=>$b){
            echo "$a => $b<br>";
        }
    }
?>