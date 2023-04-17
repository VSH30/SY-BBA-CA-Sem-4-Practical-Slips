<?php
    $city = $_GET['city'];
    $arr = array("Pune","Mumbai");
    $hint="";
    echo "<b>Suggestions: </b>";
    if(!empty($city)){
        foreach($arr as $a)
            if(stristr($a,$city))
                $hint.="$a,"; 
    }
    echo ($hint=="") ? "No Suggestions" : $hint;   
?>