<?php
    class Vehicle{
        protected $name;
    }
    class LightMotorVehicle extends Vehicle{
        private $mileage;
        public function __construct($n,$m){
            $this->name=$n;
            $this->mileage=$m;
        }
        public function getrow(){
            echo "<tr align=center>
                    <td>".$this->name."</td>
                    <td>".$this->mileage."</td>
                </tr>";
        }
    }
    class HeavyMotorVehicle extends Vehicle{
        private $capacity;
        public function __construct($n,$c){
            $this->name=$n;
            $this->capacity=$c;
        }
        public function getrow(){
            echo "<tr align=center>
                    <td>".$this->name."</td>
                    <td>".$this->capacity."</td>
                </tr>";
        }
    }

    $arr=array();
    $arr[0]= new LightMotorVehicle("ABC",20);
    $arr[1]= new LightMotorVehicle("DEF",50);
    $arr[2]= new LightMotorVehicle("GHI",40);
    $arr[3]= new LightMotorVehicle("JKL",60);
    $arr[4]= new LightMotorVehicle("MNO",30);
    
    $arr2=array();
    $arr2[0]= new HeavyMotorVehicle("PQR",100);
    $arr2[1]= new HeavyMotorVehicle("STU",400);
    $arr2[2]= new HeavyMotorVehicle("VWX",500);
    $arr2[3]= new HeavyMotorVehicle("YZA",300);
    $arr2[4]= new HeavyMotorVehicle("BCD",200);

    echo "<table cellpadding=5px border=1><tr><th colspan=2>Light Motor Vehicle</th></tr><tr><th>Name</th><th>Mileage</th></tr>";
    foreach($arr as $x)
        $x->getrow();
    echo "</table>";

    echo "<table cellpadding=5px border=1><tr><th colspan=2>Heavy Motor Vehicle</th></tr><tr><th>Name</th><th>Capacity in Tons</th></tr>";
    foreach($arr2 as $x)
        $x->getrow();
    echo "</table>";
?>