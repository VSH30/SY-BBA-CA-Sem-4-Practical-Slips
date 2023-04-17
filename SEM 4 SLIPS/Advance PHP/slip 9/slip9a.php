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

    if(isset($_POST['submit'])){
        $a = $_POST['a']; $b = $_POST['b'];

        echo "Numbers are $a and $b : <br>";
        $ans = new calculator($a,$b);
        switch($_POST['op']){
            case 1: echo "<br>$a + $b = ".$ans->add();  break;
            case 2: echo "<br>$a - $b = ".$ans->sub();  break;
            case 3: echo "<br>$a * $b = ".$ans->mul();  break;
            case 4: echo "<br>$a / $b = ".$ans->div();  break;
            default: echo "IVALID OPERATION!!!";    break;
        }
    }
?>