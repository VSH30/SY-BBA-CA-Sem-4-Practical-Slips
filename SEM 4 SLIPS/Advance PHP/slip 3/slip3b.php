<?php
    $xml = simplexml_load_file('cricket.xml');
    $team = $xml->addChild("Team");
    $team->addAttribute("country","India");
    $team->addChild("player","Vishal");
    $team->addChild("runs","99");
    $team->addChild("wicket",1);

    foreach($xml as $y){
        echo "<br>";
        echo $y->getName();
        foreach($y as $x){
            echo "<br>";
            echo $x->getName();
            echo " = $x";
        }
    }
?>