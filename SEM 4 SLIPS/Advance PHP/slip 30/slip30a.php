<?php
    interface abc{
        public function cal_area();
    }
    class Square implements abc{
        protected $side;
        public function __construct($x){
            $this->side = $x;
        }
        public function cal_area(){
            echo "<br>Area of Square = ".(pow($this->side,2));
        }
    }
    class Rectangle extends Square implements abc{
        private $side2;
        public function __construct($a,$b){
            parent::__construct($a);
            $this->side2 = $b;
        }
        public function cal_area(){
            echo "<br>Area of Rectangle = ".($this->side*$this->side2);
        }
    }
    class Triangle implements abc{
        private $b, $h;
        public function __construct($m,$n){
            $this->b = $m;
            $this->h = $n;
        }
        public function cal_area(){
            echo "<br>Area of Triangle = ".($this->b*$this->h*(1/2));
        }
    }
    if(isset($_POST['submit'])){
        $sq = new Square($_POST['s1']);
        $rc = new Rectangle($_POST['s2'],$_POST['s3']);
        $tri = new Triangle($_POST['s4'],$_POST['s5']);
        $sq->cal_area();
        $rc->cal_area();
        $tri->cal_area();
    }
?>