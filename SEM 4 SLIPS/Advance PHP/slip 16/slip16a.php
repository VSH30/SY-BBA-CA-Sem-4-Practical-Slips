<html>
    <form method="POST" action="<?php echo $_SERVER['PHP_SELF'];?>">
        Enter first string : <input type=text name=str1 value="<?php if(isset($_POST['str1']))echo $_POST['str1'];?>"><br>
        Enter second string : <input type=text name=str2 value="<?php if(isset($_POST['str2']))echo $_POST['str2'];?>"><br><br>
        <input type=submit name=submit value=submit>
    </form>
    <?php
        if(isset($_POST['submit'])){
            echo "<br>String 1 = ".$_POST['str1'];
            echo "<br>String 2 = ".$_POST['str2'];
            echo($_POST['str1'] == $_POST['str2'])?"<br><br>String 1 = String 2":"<br><br>String 1 != String 2";  
        }
    ?>
</html>