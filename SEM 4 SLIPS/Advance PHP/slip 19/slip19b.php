<html>
    <form metho=GET action=#>
        Select a Book Name : 
        <select name="op">
            <?php
                $a = simplexml_load_file('books.xml');
                foreach($a as $xx){
                    $w=$xx->name;
                    echo "<option value=$w>$w</option>";
                }
            ?>
        </select>
        <input type=submit name=submit value=submit>
    </form>
</html>

<?php
    $op = $_GET['op'];
    //$op="WROX";
    foreach($a as $z){
        if($op == $z->name){
            foreach($z as $y)
                echo "<br>".$y->getname()." = $y";
        }       
     }
?>