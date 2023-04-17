<html>
    <head>
        <style>
            tr{
                text-align: center;
            }
        </style>
    </head>
    <table border=2 cellpadding=5>
        <tr>
            <th>Student Name</th>
            <th>Class Name</th>
            <th>Percentage</th>
        </tr>
<?php
    $xml=simplexml_load_file('course.xml');
    foreach($xml as $a){
        echo "<tr><td>".$a->StudentName."</td>";
        echo "<td>".$a->ClassName."</td>";
        echo "<td>".$a->Percentage."</td></tr>";
    }
?>
    </table>
</html>