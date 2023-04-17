<?php
    $pname=$_GET['pname'];
    $conn = mysqli_connect("localhost","root","","slip7");
    if(!$conn)
        die(mysqli_connect_error());
    
    $query = mysqli_query($conn,"SELECT Seat_no,Name,Class FROM Student,Project WHERE Student.P_Group_No=Project.P_Group_No AND Project_Title='$pname'");

    echo "<h1>$pname</h1>";
    while($row=mysqli_fetch_assoc($query)){
        echo "<b>Seat No: </b>".$row['Seat_no']."<br>";
        echo "<b>Name: </b>".$row['Name']."<br>";
        echo "<b>Class: </b>".$row['Class']."<br><br>";
    }
?>