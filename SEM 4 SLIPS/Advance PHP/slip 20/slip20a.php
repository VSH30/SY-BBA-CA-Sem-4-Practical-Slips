<?php
    $xml = simplexml_load_file('movies.xml');
    echo "<table border=2 cellpadding=5>";
    echo "<tr><th>Category</th><th>Movie Name</th><th>Release Year</th><th>Actor Name</th></tr>";
    foreach($xml as $x){
        echo "<tr align=center><td>".$x->getName()."</td>";
        /*echo "<td>".$x->MovieName."</td>";
        echo "<td>".$x->ReleaseYear."</td>";
        echo "<td>".$x->ActorName."</td></tr>";*/
        foreach($x as $z)
            echo "<td>".$z."</td>";
        echo "</tr>";
    }
    echo "</table>";
?>