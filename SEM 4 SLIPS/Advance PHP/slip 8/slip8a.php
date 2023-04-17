<?php
    class shape{
        protected $s1, $s2;
        function __construct($x,$y){
            $this->s1=$x;
            $this->s2=$y;
        }
        public function area(){
            return($this->s1*$this->s2);
        }
    }
    class triangle extends shape{
        function __construct($x,$y){
            parent::__construct($x,$y);
        }
        function area(){
            return(parent::area()/2);
        }
    }
    class square extends shape{
        function __construct($x){
            parent::__construct($x,$x);
        }
    }
    class circle extends shape{
        function __construct($x){
            parent::__construct($x,$x);
        }
        function area(){
            return(3.14*(parent::area()));
        }
    }
    $tri = new triangle(5,8);
    $sq = new square(7);
    $circ = new circle(3);

    echo "<br>Area of Triangle = ".$tri->area();
    echo "<br>Area of Square = ".$sq->area();
    echo "<br>Area of Circle = ".$circ->area();
?>