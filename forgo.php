<!DOCTYPE result>
<html>
<head>
<title>Result|Au</title>
</head>
<body bgcolor="GreenYellow">
<center><h1>Anna University</h1>
<h2>Results-2021</h2>
<form method="post" value="result">
<label>Register Number:</label>
<input type="text" name="reno" value=""><br><br><br>
<input type="submit" name="result" value="result">
<input type="reset" name="clear" value="clear"></center>
</form>
<?php
if(isset($_POST['result']))
{
        $rno=$_POST['reno'];
}

$servername="localhost";
$mysql_db="msc";
$username="root";
$password="23-Apr-2001";

$conn = new mysqli($servername,$username,$password,$mysql_db);
if($conn->connect_error)
{
	die("Connection failed: ".$conn->connect_error);
}
$sql="select Rollno,Name,c,DP,AP,CF,CE from student_mark where Rollno='".$rno."'";
$result = mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0)
{
while($row = mysqli_fetch_assoc($result))
{
	echo "Rollno: ".$row["Rollno"]."-Name: ".$row["Name"]."- C: ".$row["c"]."-DP: ".$row["DP"]."-AP: ".$row["AP"]."-CF: ".$row["CF"]."-CE: ".$row[
"CE"]."<br>";
}
}
else
{
	echo "Invalid Data";
}
?>
</body>
</html>

