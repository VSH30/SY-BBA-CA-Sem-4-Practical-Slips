<html>
    <head>
        <style>
            tr{
                text-align:center;
            }
        </style>
    </head>
    <body>
        <table border="1" cellpadding=5>
            <tr><th>Name</th><th>Info</th></tr>
            <?php
                echo "<tr><th>PHP_SELF</th><td>" .$_SERVER['PHP_SELF'] ."</td></tr>";
                echo "<tr><th>SERVER_NAME</th><td>" .$_SERVER['SERVER_NAME'] ."</td></tr>";
                echo "<tr><th>HTTP_HOST</th><td>" .$_SERVER['HTTP_HOST'] ."</td></tr>";
                echo "<tr><th>SCRIPT_NAME</th><td>".$_SERVER['SCRIPT_NAME']."</td></tr>";
                echo "<tr><th>HTTP_REFERER</th><td>".$_SERVER['HTTP_REFERER']."</td></tr>";
                echo "<tr><th>HTTP_USER_AGENT</th><td>".$_SERVER['HTTP_USER_AGENT']."</td></tr>";
            ?>
        </table>
    </body>
</html>