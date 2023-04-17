<?php
    class Circle{
        private $radius=5;
        function area(){
            return(3.14*(pow($this->radius,2)));
        }
        function circumference(){
            return(2*3.14*$this->radius);
        }
    }
    if(isset($_POST['submit'])){
        $c = new Circle;
        echo "Radius = 5<br>";
        if(isset($_POST['area']))
            echo "<br>Area of Circle = ".$c->area();
        if(isset($_POST['circum']))
            echo "<br>Circumference of Circle = ".$c->circumference();
    }
?>