<?php
    abstract class shape{
        abstract function area();
        abstract function volume();
    }
    class rectangle extends shape{
        private $l, $b;
        public function __construct($x,$y){
            $this->l = $x;
            $this->b = $y;
        }
        function volume(){
            return($this->l * $this->b);
        }
        function area(){
            return("NA");
        }
    }
    class circle extends shape{
        private $r;
        public function __construct($x){
            $this->r = $x;
        }
        function volume(){
            return((4/3)*3.14*pow($this->r,3));
        }
        function area(){
                return(4*3.14*$this->r*$this->r);
        }
    }
    class cylinder extends shape{
        private $r, $h;
        public function __construct($x,$y){
            $this->r = $x;
            $this->h = $y;
        }
        function volume(){
            return($this->r * $this->r * $this->h *3.14);
        }
        function area(){
            return(2*3.14*$this->r*($this->r+$this->h));
        }
    }
    $rec = new rectangle(5,6);
    $circ = new circle(5);
    $cyl = new cylinder(2,8);
    echo "<br>Area of rectangle = ".$rec->area();
    echo "<br>Volume of rectangle = ".$rec->volume();
    echo "<br>Area of circle = ".$circ->area();
    echo "<br>Volume of circle = ".$circ->volume();
    echo "<br>Area of cylinder = ".$cyl->area();
    echo "<br>Volume of cylinder = ".$cyl->volume();
?>