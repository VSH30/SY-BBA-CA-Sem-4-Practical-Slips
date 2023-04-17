<html>
    <form method=GET action="<?php echo $_SERVER['PHP_SELF']?>">
        Enter a Number : 
        <input type="number" name="num">
        <input type=submit value=submit name=submit>
    </form>
</html>
<?php
    function sum($num) {
        $sum = 0;
        for ($i = 0; $i < strlen($num); $i++){
            $sum += $num[$i];
        }
        return $sum;
    }
    function fibo($n){
        $a = 0;
        $b = 1;
        echo " $a  $b ";
        for($i=0;$i<($n-2);$i++){
            $c = $a + $b;
            $a = $b;
            $b = $c;
            echo " $c ";    
        }
    }
    if(isset($_GET['num'])){
        $num = $_GET['num'];
        echo "<h3>Sum of digits of $num = ".sum($num)."</h3>";
        echo "<h3>First $num Fibonacci : ";
        echo fibo($num)."</h3>";
    }
?>