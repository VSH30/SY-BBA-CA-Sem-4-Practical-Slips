<?php
    CLASS Calculator{
        private $a, $b;
        public function __construct($x,$y){
            $this->a = $x;
            $this->b = $y;
        }
        public function add(){
            return($this->a + $this->b);
        }
        public function sub(){
            return($this->a - $this->b);
        }
        public function mul(){
            return($this->a * $this->b);
        }
        public function div(){
            return($this->a / $this->b);
        }
    }
    $a = 10; $b = 5;
    echo "Numbers are $a and $b : <br>";
    $ans = new calculator($a,$b);
    echo "<br>$a + $b = ".$ans->add();
    echo "<br>$a - $b = ".$ans->sub();
    echo "<br>$a * $b = ".$ans->mul();
    echo "<br>$a / $b = ".$ans->div();
?>