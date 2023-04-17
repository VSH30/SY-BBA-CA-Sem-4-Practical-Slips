<html>
<body><table border=1 cellpadding=5px>
    <tr>
        <th>Name</th>
        <th>Runs</th>
        <th>Wickets</th>
        <th>Not Out</th>
    </tr>
<?php
    $x = simplexml_load_file('cricket.xml');
    foreach($x as $y){
        if(($y->runs > 1200) && ($y->wickets >= 50)){
            echo "<tr align=center>";
            foreach($y as $z){
                echo "<td>".$z."</td>";
            }
            echo "</tr>";
        }
    }
?>
    </table>
    </html>