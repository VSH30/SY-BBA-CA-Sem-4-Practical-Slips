<html>
    <form metho=GET action=#>
        Select a Publication : 
        <select name="op">
            <option value="O'RELLY">O'RELLY</option>
            <option value="WROX">WROX</option>
            <option value="pcpcpcpc">pcpcpcpc</option>
            <option value="pdpdpd">pdpdpd</option>
            <option value="pepepe">pepepe</option>
            <option value="pfpfpf">pfpfpf</option>
        </select>
        <input type=submit name=submit value=submit>
    </form>
</html>

<?php
    $x = simplexml_load_file('bookstore.xml');
    $op = $_GET['op'];
    //$op="WROX";
    
    foreach($x as $y){
        foreach($y as $z){
            if($z->publication == $op){
                foreach($z as $v)
                    echo "<b>".$v->getName()." =</b> $v<br>";
            }
        }
    }
?>