<?php
    $xml = simplexml_load_file('sports.xml');
    echo "<h1>".$xml->getName()."</h1>";
    foreach($xml as $k){
        echo "<br>".$k->getName()."<br>";
        foreach($k as $y=>$x){
            echo "$y => $x<br>";
        
        }
    }
    echo "<br><br>";
?>