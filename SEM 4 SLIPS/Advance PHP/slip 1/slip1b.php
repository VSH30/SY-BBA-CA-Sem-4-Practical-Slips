<html>
    <body>
        <form method=post action=#>
            Select Course: <select name="op">
                <option value="SYBCA">SYBCA</option>
                <option value="FYBCA">FYBCA</option>
                <option value="TYBCA">TYBCA</option>
            </select>
            <input type=submit name=submit value=submit>
        </form>
        <table border=1>
            <tr align=center>
                <th>RollNo</th>
                <th>StudName</th>
                <th>Addr</th>
                <th>College</th>
                <th>Course</th>
            </tr>
    <?php
        if($_POST['submit']){
            $xml = simplexml_load_file('student.xml');
            foreach($xml as $y){
                if($y->course == $_POST['op']){
                    echo "<tr align=center>";
                    foreach($y as $z){
                        echo "<td>".$z."</td>";
                    }
                    echo "</tr>";
                }  
            }
        }
    ?>
    </table>
    </body>
</html>