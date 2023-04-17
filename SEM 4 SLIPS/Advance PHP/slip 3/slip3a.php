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
    $ans = new calculator(3,4);
    echo "<br>".$ans->add();
    echo "<br>".$ans->sub();
    echo "<br>".$ans->mul();
    echo "<br>".$ans->div();
?>