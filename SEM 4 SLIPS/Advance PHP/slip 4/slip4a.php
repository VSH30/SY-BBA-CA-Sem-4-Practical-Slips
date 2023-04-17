<?php
    Class Employee{
        private $id, $name, $department, $salary;
        public function __construct($a,$b,$c,$d){
            $this->id=$a;
            $this->name=$b;
            $this->department=$c;
            $this->salary=$d;
        }
        public function sal(){
            return $this->salary;
        }
        public function details(){
            echo "<br>Employee Details: <br>";
            echo "<br>ID = ".$this->id;
            echo "<br>Name = ".$this->name;
            echo "<br>Department = ".$this->department;
            echo "<br>Salary = ".$this->salary;
        }
    }
    Class Manager Extends Employee{
        private $bonus;
        public function __construct($x,$y,$z,$w,$v){
            parent::__construct($x,$y,$z,$w);
            $this->bonus = $v;
        }
        public function totalsal(){
            return(parent::sal() + $this->bonus);
        }
        public function data(){
            parent::details();
            echo "<br>Bonus = ".$this->bonus;
            echo "<br>Total Salary = ".$this->totalsal();
        }
    }
    
    $ob = array();

    $ob[0] = new Manager(101,"Vishal","DepA",500,200);
    $ob[1] = new Manager(102,"Rohit","DepB",600,300);
    $ob[2] = new Manager(103,"Adnan","DepC",700,400);
    
    $temp=$ob[0];
    
    foreach($ob as $x){
        if($x->totalsal() > $temp->totalsal())
            $temp=$x;
    }
    
    $temp->data();
?>