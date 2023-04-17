<html>
    <form method=POST action="<?php echo $_SERVER['PHP_SELF'];?>">
        Enter String : <input type="text" name="str">
        <input type=submit name=submit value="Reverse String">
    </form>
    <?php
        if(isset($_POST['submit'])){
            if(!empty($_POST['str'])){
                echo "<br>String = ".$_POST['str'];
                echo "<br>REVERSED = ".strrev($_POST['str']);
            }else{
                echo "ENTER A VALID STRING!!!";
            }
        }
    ?>
</html>
