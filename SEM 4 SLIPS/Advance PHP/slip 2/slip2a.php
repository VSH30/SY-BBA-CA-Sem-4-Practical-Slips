<?php
    class abc{
        public $x=5, $y=6,$z="XYZ";
        public function fun(){
            echo $this->x;
        }
        public function tp(){
            echo $this->y;
        }
    }
    $o = new abc;
    print_r(get_declared_classes());
    echo "<br>";
    print_r(get_class_methods($o));
    echo "<br>";
    print_r(get_class_vars(get_class($o)));
?>