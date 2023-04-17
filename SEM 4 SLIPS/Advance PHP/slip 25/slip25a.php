<?php
    $xml=simplexml_load_file('vehicle.xml');
    foreach($xml as $a){
        echo "<br><br>".$a->getName()." : ".$a['Type'];
        foreach($a as $x=>$y){
            echo "<br> $x => $y";
        }
    }
?>