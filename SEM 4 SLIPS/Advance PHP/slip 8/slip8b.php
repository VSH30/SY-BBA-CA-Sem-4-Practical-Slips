<?php
    $q = $_GET['q'];
    $xml = simplexml_load_file('player.xml');
    foreach($xml as $a) 
        if($a->Player_name == $q){
            echo "<br>";
            foreach($a as $y)
                echo "<br><b>".$y->getName()."</b> : $y";
        }
?>