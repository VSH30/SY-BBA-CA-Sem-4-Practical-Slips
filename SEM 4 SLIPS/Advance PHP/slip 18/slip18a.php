<html>
    <form method=post action="<?php echo $_SERVER['PHP_SELF'];?>">
        Enter Distance in Meters : <input type=number name=meter><br>
        <br>Covert to :<br>
        <input type=radio name=op value=1>Centi-Meters<br>
        <input type=radio name=op value=2>Kilo-Meters<br><br>
        <input type=submit name=submit value=Convert>
    </form>
    <?php
        if(isset($_POST['submit'])){
            if(!empty($_POST['meter'])){
                switch($_POST['op']){
                    case 1: echo "<br>".$_POST['meter']." Meter = ".($_POST['meter']*100)." Centi-Meter"; break;
                    case 2: echo "<br>".$_POST['meter']." Meter = ".($_POST['meter']/1000)." Kilo-Meter"; break;
                    default: echo "<br>INVALID OPTION!!!"; break;
                }
            }else{
                echo "<br>ENTER VALID DISTANCE!!!";
            }
        }
    ?>
</html>