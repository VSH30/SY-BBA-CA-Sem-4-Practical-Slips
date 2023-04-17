<?php
    interface conversion{
        public function gmtokg();
        public function kgtogm();
    }
    class Convert implements conversion{
        private $gm, $kg;
        public function __construct($x,$y){
            $this->gm=$x;
            $this->kg=$y;
        }
        function gmtokg(){
            return($this->gm/1000);
        }
        function kgtogm(){
            return($this->kg*1000);
        }
    }
    $gm = 700;
    $kg = 2.3;
    $v = new Convert($gm,$kg);
    echo "$gm gm = ".$v->gmtokg()." kg";
    echo "<br>$kg kg = ".$v->kgtogm()." gm";
?>