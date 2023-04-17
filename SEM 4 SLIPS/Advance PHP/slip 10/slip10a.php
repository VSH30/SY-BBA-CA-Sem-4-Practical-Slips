<?php
    class slip10a{
        public $var1=6, $var2="vsh", $var3;
        function num(){
            return($this->var1);
        }
        function str(){
            return($this->var2);
        }
    }
    $ob = new slip10a;
    
    echo "<br><br>Class name of Object: ";
    echo "<br>".get_class($ob);

    echo "<br><br>Object variables:";
    $a = get_object_vars($ob);
    foreach($a as $x=>$y){
        echo "<br>$x => $y";
    }

    echo "<br><br>Object methods:";
    $a = get_class_methods($ob);
    foreach($a as $x=>$y){
        echo "<br>$x => $y";
    }
?>