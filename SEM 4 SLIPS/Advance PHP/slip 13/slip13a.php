<html>
    <form method="POST" action="<?php echo $_SERVER['PHP_SELF'];?>">
        Enter Employee ID : <input type=number name=id value="<?php if(isset($_POST['id']))echo $_POST['id'];?>"><br>
        Enter Employee Name : <input type=text name=name value="<?php if(isset($_POST['name']))echo $_POST['name'];?>"><br>
        Enter Employee Dept : <input type=text name=dept value="<?php if(isset($_POST['dept']))echo $_POST['dept'];?>"><br>
        Enter Employee Add : <input type=text name=add value="<?php if(isset($_POST['add']))echo $_POST['add'];?>"><br>
        <input type=submit name=submit value=submit>
    </form>
</html>
<?php
    if(isset($_POST['submit'])){
        echo "<br>ID = ".$_POST['id'];
        echo "<br>Name = ".$_POST['name'];
        echo "<br>Dept = ".$_POST['dept'];
        echo "<br>Add = ".$_POST['add'];
    }
?>