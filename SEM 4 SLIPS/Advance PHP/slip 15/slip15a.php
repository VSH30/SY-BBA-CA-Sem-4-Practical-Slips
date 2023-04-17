<html>
    <form method="POST" action="<?php echo $_SERVER['PHP_SELF'];?>">
        Select Subjects:<br>
        <input type="checkbox" name="sub[]" value="PHP" <?php if(isset($_POST['sub']))if(in_array("PHP",$_POST['sub']))echo 'checked';?>>PHP<br>
        <input type="checkbox" name="sub[]" value="C Prog" <?php if(isset($_POST['sub']))if(in_array("C Prog",$_POST['sub']))echo 'checked';?>>C Prog<br>
        <input type="checkbox" name="sub[]" value="DMBS" <?php if(isset($_POST['sub']))if(in_array("DMBS",$_POST['sub']))echo 'checked';?>>DMBS<br>
        <input type="checkbox" name="sub[]" value="C++" <?php if(isset($_POST['sub']))if(in_array("C++",$_POST['sub']))echo 'checked';?>>C++<br>
        <input type="checkbox" name="sub[]" value="JS" <?php if(isset($_POST['sub']))if(in_array("JS",$_POST['sub']))echo 'checked';?>>JS<br>
        <br>
        <input type=submit name=submit value=submit>
    </form>
    <?php
        if(isset($_POST['submit'])){
            $a = $_POST['sub'];
            echo "SELECTED SUBJECTS:<br>";
            foreach($a as $x){
                echo "<br>$x";
            }
        }
    ?>
</html>