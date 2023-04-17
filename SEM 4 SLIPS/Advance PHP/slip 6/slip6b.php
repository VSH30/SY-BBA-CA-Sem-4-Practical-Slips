<?php
    $name=$_GET['txt'];
    $mysqli = new mysqli("localhost","root","","slip6");
    if($mysqli->connect_errno){
        die('Database Connection errr: '.$mysqli->error);
    }

    $hint="";
    $len=strlen($name);
    echo "<table border=1 cellpadding=10px>
                    <tr>
                        <th>Employee No</th>
                        <th>Employee Name</th>
                        <th>Employee Designation</th>
                        <th>Employee Salary</th>
                    </tr>";
    if($name!=""){
        $result=$mysqli->query("SELECT * FROM employee");
        while($row=mysqli_fetch_array($result)){
            if(stristr($row['ename'],substr($name,0,$len))){
                echo "<tr align=center>
                    <td>".$row['eno']."</td>
                    <td>".$row['ename']."</td>
                    <td>".$row['designation']."</td>
                    <td>".$row['salary']."</td>
                </tr>";
            }
        }
    }
    $mysqli->close();
?>