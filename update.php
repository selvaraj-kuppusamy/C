<!DOCTYPE mysql and php>
<html>
<head>
<title>DATABASE</title>
</head>
<body bgcolor="GreenYellow">
<h1>ANNA UNIVERSITY DATABASE</h1>
<form method="get" value="update">
Rollno:<input type="text" name="no">
Mark:<input type="text" name="name">
<input type="submit" name="update" value="update">
</form>
<?php
if(isset($_GET['update']))
{
	$rno=$_GET['no'];
	$name=$_GET['name'];
}
$servername="localhost";
$mysql_db="msc";
$username="root";
$password="23-Apr-2001";
$conn = new mysqli($servername,$username,$password,$mysql_db);
$query="update student_mark set AP='".$name."' where Rollno='".$rno."'";
echo $query;
$conn->query($query);
$conn->close();
?>
</body>
</html>
