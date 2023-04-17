<html>
    <form method="GET" action="#">
        Select an Operation : <br>
        Create<input type="radio" name="op" value="1"><br>
        Read<input type="radio" name="op" value="2"><br>
        Update<input type="radio" name="op" value="3"><br>
        Display<input type="radio" name="op" value="4"><br>
        Delete<input type="radio" name="op" value="5"><br>
        <input type="submit" name="submit" value="submit">
    </form>
</html>
<?php
    //$q = mysqli_query($conn,"SELECT * FROM Teacher");
    if(isset($_GET['op'])){
        if($_GET['op']==1){
            $conn = mysqli_connect("localhost","root","");
            $query = "CREATE DATABASE IF NOT EXISTS slip25;";
            $query .= "USE slip25;";
            $query .= "DROP TABLE IF EXISTS Teacher;";
            $query .= "CREATE TABLE Teacher(tid INT(3) PRIMARY KEY, tname VARCHAR(30), address VARCHAR(50), subject VARCHAR(25));";
            $query .= "INSERT INTO Teacher VALUES(999,'Saniya','Vallabhnagar','Networking');";
            $res = mysqli_multi_query($conn,$query);
            if($res)
                echo "Tables Created!!!";
            else
                echo mysqli_error($conn);
            mysqli_close($conn);
        }else if($_GET['op']==2 || $_GET['op']==4){
            $conn=mysqli_connect("localhost","root","","slip25");
            if(!$conn)
                echo "FIRST YOU NEED TO CREATE!!!";
            echo "<table border=1 cellpadding='5px'>
                <tr align=center><th>Tid</th><th>Tname</th><th>Addr</th><th>Subject</th></tr>";
            $q = mysqli_query($conn,"SELECT * FROM Teacher");
            if(!$q)
                echo mysqli_error($conn);
            while($r = mysqli_fetch_row($q)){
                echo "<tr align=center><td>$r[0]</td><td>$r[1]</td><td>$r[2]</td><td>$r[3]</td></tr>";
            }
            echo "</table>";
            mysqli_close($conn);
        }else if($_GET['op']==3){
            $conn=mysqli_connect("localhost","root","","slip25");
            if(!$conn)
                echo "FIRST YOU NEED TO CREATE!!!";
            $query = mysqli_query($conn,"INSERT INTO Teacher VALUES(101,'Vishal','PUNE','PHP'),(102,'ADNAN','Vallabhnagar','BigData'),(103,'Rohit','Nigdi','OS'),(104,'Pranav','ABC','Jquery'),(105,'Shravani','XYZ','CPP');");
            if($query)
                echo "Tables Updated!!! (Values Inserted)";
            else
                echo "Tables already Updated!!!";
            mysqli_close($conn);
        }else if($_GET['op']==5){
            $conn = mysqli_connect("localhost","root","","slip25");
            if(!$conn)
                echo "No Database Created to DELETE!!!";
            $q = mysqli_query($conn,"DROP DATABASE slip25");
            if($q)
                echo "DELETED DATABASE";
            else
                echo "FAILED TO DELETE".mysqli_error($conn);
        }
    }
?>