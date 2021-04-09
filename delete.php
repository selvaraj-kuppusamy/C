<!DOCTYPE mysql and php>
<html>
<head>
<title>DATABASE</title>
</head>
<body bgcolor="GreenYellow">
<h1>ANNA UNIVERSITY DATABASE</h1>
<form method="get" value="delete">
ROLL NO:<input type="text" name="ROLLNO">
<input type="submit" name="delete" value="delete">
</form>
<?php

if(isset($_GET['delete']))
{
        $Rollno=$_GET['ROLLNO'];
}
echo $Rollno;
$servername="localhost";
$mysql_db="msc";
$username="root";
$password="23-Apr-2001";
$conn = new mysqli($servername,$username,$password,$mysql_db);
if($conn -> connect_error)
{
        die("connection failed:".$conn -> connect_error);
}
$sql = "DELETE FROM student_mark WHERE Rollno = '".$Rollno."'";
echo $sql;
$conn->query($sql);
$conn->close();
?>
</body>
</html>
