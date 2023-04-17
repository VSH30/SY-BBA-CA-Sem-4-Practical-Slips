<?php
    $x = new DOMDocument();
    $x->load("student.xml");
    print $x->saveXML()."<br><br>";
    print $x->save("newfile.doc");
?>