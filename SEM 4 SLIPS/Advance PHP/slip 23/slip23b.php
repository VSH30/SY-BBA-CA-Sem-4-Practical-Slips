<html>
    <head>
        <script>
            function display(actor){
                var xmlhttp;
                xmlhttp = new XMLHttpRequest();
                xmlhttp.onreadystatechange = function(){
                    if(xmlhttp.readyState==4 && xmlhttp.status==200)
                        document.getElementById("result").innerHTML = xmlhttp.responseText;
                }
                xmlhttp.open("GET","slip23bb.php?actor="+actor,true);
                xmlhttp.send();
            }
        </script>
    </head>
    <body>
        <form method="GET">
            Select Actor : <select name="actor" onchange="display(this.value)">
                <option value=""></option>  
            <?php
                $conn=mysqli_connect("localhost","root","","slip9");
                $q=mysqli_query($conn,"SELECT * FROM Actor");
                while($row=mysqli_fetch_row($q))
                    echo "<option value=$row[0]>$row[1]</option>";
            ?>
            </select>
        </form>
        <div id="result"></div>
    </body>
</html>