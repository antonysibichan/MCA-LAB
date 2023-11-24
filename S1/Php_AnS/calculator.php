<html>
<body>
<form method="post">
	number:<input type="text" name="value1">
		<input type="text" name="value2">
	<input type="submit" name="operator" value="+">
	<input type="submit" name="operator" value="-">
	<input type="submit" name="operator" value="*">
</form>
</body>
</html>
<?php
$value1=$_POST['value1'];
$value2=$_POST['value2'];
$operator=$_POST['operator'];
	switch($operator)
	{
		case "+":
			 $result= $value1 + $value2;
		break;
		case "-":
			$result= $value1 - $value2;
		break;
		case "*":
			$result= $value1 * $value2;
		break;
	}
echo "the result is: $result";
?>

