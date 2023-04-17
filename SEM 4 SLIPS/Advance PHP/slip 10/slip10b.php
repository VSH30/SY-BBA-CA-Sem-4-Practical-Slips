<html>
    <body>
        <form method="GET" action="<?php echo $_SERVER['PHP_SELF']?>">
            Select an Operation : <br>
            Insert
            <input type="radio" name="op" value=1><br>
            Delete
            <input type="radio" name="op" value=2><br>
            Display
            <input type="radio" name="op" value=3><br><br>
            <input type="submit" name="submit" value="submit">
        </form>
        <?php
            session_start();
            $names = array("Pranav","Shravani","Saniya","Shabaz","Abhishek");

            if(!isset($_SESSION['stack']))
                $_SESSION['stack'] = array("Vishal","Adnan","Rohit");
            
            if(isset($_GET['op'])){
                switch($_GET['op']){
                    case 1:
                        $new = $names[array_rand($names,1)];
                        array_unshift($_SESSION['stack'],"$new");
                        echo "<br>Pushed $new into the stack";
                        break;
                    case 2:
                        $pop = array_shift($_SESSION['stack']);
                        echo "<br>Deleted $pop from the stack";
                        break;
                    case 3:
                        echo "Stack : <br><b>(TOP)</b>";
                        foreach($_SESSION['stack'] as $x)
                            echo "$x<br>";
                        break;
                    default:
                        echo "SELECT AN OPERATION TO PERFORM";
                        break;
                }
            }
        ?>
    </body>
</html>