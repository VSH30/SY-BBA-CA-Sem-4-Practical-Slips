<?php
    $actor = $_GET['actor'];
    $conn = mysqli_connect("localhost","root","","slip9");
    $hint = "";

    $res=mysqli_query($conn,"SELECT * FROM Movie,Actor,m_a WHERE Movie.movie_no=m_a.movie_no AND Actor.actor_no=m_a.actor_no AND Actor.actor_no=$actor");
    if(!$res)
        echo mysqli_error($conn);
    while($row=mysqli_fetch_assoc($res)){
        $hint .= "<br>".$row['movie_name'];
    }

    echo ($hint == "") ? "No Movies" : $hint;
?>