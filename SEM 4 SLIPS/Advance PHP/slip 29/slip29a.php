<?php
    $str = $_GET['str'];

    $array = array("Vishal","Adnan","Pranav","Rohit","ganesh","pooja","saniya","shabaz","mayur","ram","kelpesh","ashivan","ashiwani","tanamy","faisal","tejus","huzaif","prajakta","praisen","aditay","harish","adinath");

    $hint="";

    if(!empty($str)){
        foreach($array as $x)
            (stristr($x,$str)) ? $hint.="<br>$x" : $hint.="";
    }
    echo ($hint=="") ? "No Suggestions" : $hint;
?>