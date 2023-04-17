<html>
    <form method="POST" action=#>
    Enter tempreature in Fahrenit: <input type=number name=temp value="<?php if(isset($_POST['temp'])) echo $_POST['temp'];?>"> <input type=submit name=submit value="convert to celcius">
</form>
</html>
<?php
    if(isset($_POST['submit'])){
        if(!empty($_POST['temp'])){
            echo $_POST['temp']." fahrenit to Celcius = ";
            echo (($_POST['temp']-32)*(5/9))." Celcius";
        }else{
            echo "<br>ENTER VALID TEMP!!!";
        }
    }
?>