<?php
    $name=$_GET['name'];
    $mysqli = new mysqli("localhost","root","","slip5");
    if($mysqli->connect_errno){
        die('Database Connection errr: '.$mysqli->error);
    }
    $hint = "";
    $len=strlen($name);

    echo "<table border=2 cellpadding=5px>
                <tr>
                    <th>Student no</th>
                    <th>Student Name</th>
                    <th>Standard</th>
                    <th>Marks</th>
                    <th>Percentage</th>
                </tr>";
    if($name!=""){
        $result = $mysqli->query("SELECT * FROM Student");
        while($row=mysqli_fetch_assoc($result)){
            if(stristr($row['sname'],substr($name,0,$len))){
                echo "<tr align=center>
                        <td>".$row['sno']."</td>
                        <td>".$row['sname']."</td>
                        <td>".$row['standard']."</td>
                        <td>".$row['marks']."</td>
                        <td>".$row['per']."</td>
                    </tr>";
            }
        }
    }
    $mysqli->close();

?>