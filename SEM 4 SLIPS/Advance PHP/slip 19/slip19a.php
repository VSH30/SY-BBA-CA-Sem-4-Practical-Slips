<?php
    $xml = file_get_contents('stock_list.xml');
    $x = simplexml_load_string($xml);
    $con = json_encode($x);
    $ar = json_decode($con,true);
    print_r($ar);
    /*foreach($ar as $y)
        foreach($y as $z){
        echo "<br>";
        print_r($z);
    }*/
?>