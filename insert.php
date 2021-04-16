<!DOCTYPE insert elements into mysql>
<html>
<head>
<title>ANNA UNIVERSITY DATABASE</title>
</head>
<body bgcolor="LightGreen">
<center><h1>ANNA UNIVERSITY DATABASE</h1></center>
<hr>
<form name="result"  method="post">
ROLLNO:<input type="text" name="rollno"/><br><br>
NAME  :<input type="text" name="name"/><br><br>
C PROGRAM:<input type="text" name="c_program"/><br><br>
DIGITAL PRICIPLES:<input type="text" name="digital_priciples"/><br><br>
APPLIED MATHEMATICD:<input type="text" name="applied_mathematics"/><br><br>
COMPUTER FUNDAMENTALS:<input type="text" name="computer_fundamentals"/><br><br>
COMMUNICATIVE ENGLISH:<input type="text" name="communicative_english"/><br><br>
<input type="submit" name="result" value="submit">
</form>
<?php
if(isset($_POST['result']))
{
	$ROLLNO=$_POST['rollno'];
	$NAME=$_POST['name'];
	$C=$_POST['c_program'];
	$DP=$_POST['digital_priciples'];
	$AP=$_POST['applied_mathematics'];
	$CF=$_POST['computer_fundamentals'];
	$CE=$_POST['communicative_english'];
	
}
$servername="localhost";
$mysql_db="msc";
$username="root";
$password="23-Apr-2001";
$conn = new mysqli($servername,$username,$password,$mysql_db);
if($conn -> connect_error)
{
	die("connection failed:".$conn -> connect_error);
}
$query = "INSERT INTO student_mark (ROLLNO,NAME,C,DP,AP,CF,CE)VALUES ('$ROLLNO','$NAME','$C','$DP','$AP','$CF','$CE')";
echo $query;
$conn->query($query);
$conn->close();
echo "Connected Successfully";
?>
</body>
</html>
