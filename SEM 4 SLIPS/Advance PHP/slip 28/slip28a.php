<?php
    $game = $_GET['game'];
    $array = array("Football","dr driving","pubg","cricket ","dear hunt","clash of clans","hill climbing racing");
    $hint = "";
    echo "<b>Suggestions: </b>";
    if(!empty($game)){
    foreach($array as $a)
        (stristr($a,$game)) ? $hint.="$a," : $hint.="";
    }
    echo ($hint=="") ? "No Suggestions" : $hint;
?>