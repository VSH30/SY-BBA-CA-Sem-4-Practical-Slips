<?php
    $a = file('Book1.dat');
    echo "<table border=1 cellpadding='5px'>
            <tr align=center><th>Sr No</th><th>Name</th><th>Residence number</th><th>Mobile Number</th></tr>";
    foreach($a as $y){
        $arr = explode(",",$y);
        echo "<tr align=center>";
        foreach($arr as $z)
            echo "<td>$z</td>";
        echo "</tr>";
    }
    echo "</table>";
?>