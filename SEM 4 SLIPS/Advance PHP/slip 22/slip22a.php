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
            <th>Book Category</th>
            <th>Book Title</th>
            <th>Book Author</th>
            <th>Price</th>
        </tr>

        <?php
            $xml=simplexml_load_file('Bookcategory.xml');
            foreach($xml as $a){
                echo "<tr><td>".$a['category']."</td>";
                echo "<td>".$a->Book_Title."</td>";
                echo "<td>".$a->Book_Author."</td>";
                echo "<td>".$a->Book_Price."</td></tr>";
            }
        ?>
    </table>
</html>