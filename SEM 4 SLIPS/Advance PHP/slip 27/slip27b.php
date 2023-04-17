<?php
    $xml = simplexml_load_file('book.xml');

    $hint = "<table border=1 cellpadding=5px>
                <tr align=center>
                    <th>Book Code</th>
                    <th>Name</th>
                    <th>Author</th>
                    <th>Year</th>
                    <th>Price</th>
                </tr>";
    
    foreach($xml as $x){
        $hint .= "<tr align=center>";
        foreach($x as $y)
            $hint.="<td>$y</td>";
        $hint .= "</tr>";
    }
    $hint .= "</table>";
    echo $hint;
?>