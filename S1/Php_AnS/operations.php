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
