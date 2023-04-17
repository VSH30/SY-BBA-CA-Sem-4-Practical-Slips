<?php
Class Student{
    protected $Roll_No, $Name, $PRN_No;
}

Class Marks extends Student{
    protected $M_PHP, $M_OS, $M_CPP, $M_Networking;
}

Class Result extends Marks{
    protected $Total_Marks, $Percentage, $Grade;
    public function __construct($r,$n,$p,$php,$os,$cpp,$net){
        $this->Roll_No = $r;
        $this->Name = $n;
        $this->PRN_No = $p;
        $this->M_PHP = $php;
        $this->M_OS = $os;
        $this->M_CPP = $cpp;
        $this->M_Networking = $net;
        $this->Total_Marks = $php+$os+$cpp+$net;
        $this->Percentage = ($this->Total_Marks/400)*100;
        if($this->Percentage <40)
            $this->Grade = "FAIL";
        else if($this->Percentage <75)
            $this->Grade = "PASS";
        else if($this->Percentage >=75)
            $this->Grade = "DISTINCTION";
    }

    public function getresult(){
        echo "<br>Name : ".$this->Name;
        echo "<br>Roll No : ".$this->Roll_No;
        echo "<br>PRN No : ".$this->PRN_No;
        echo "<br><br><b>Marks :</b> ";
        echo "<br>PHP = ".$this->M_PHP;
        echo "<br>OS = ".$this->M_OS;
        echo "<br>CPP = ".$this->M_CPP;
        echo "<br>Networking = ".$this->M_Networking;
        echo "<br><br><b>Total Marks = ".$this->Total_Marks."</b>";
        echo "<br><b>Percentage = ".$this->Percentage."%</b>";
        echo "<br><b>Grade = ".$this->Grade."</b>";
    }
}


if(!empty($_GET['rno']) && !empty($_GET['name']) && !empty($_GET['prn']) && !empty($_GET['php']) && !empty($_GET['os']) && !empty($_GET['cpp']) && !empty($_GET['net'])){
    $stud = new Result($_GET['rno'],$_GET['name'],$_GET['prn'],$_GET['php'],$_GET['os'],$_GET['cpp'],$_GET['net']);
    $stud->getresult();
}else{
    echo "Fill all the details!!!";
}
?>