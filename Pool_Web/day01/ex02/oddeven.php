#!/usr/bin/php
<?php
$box = fopen("php://stdin", "r");
while (1)
{
	echo ("Enter a number: ");
	$val = fgets($box);
	if ($val == FALSE)
	{
		echo "\n";
		fclose($box);
		break;
	}
	$len = strlen($val);
	$val = substr($val, 0, $len - 1);
	$val = trim($val);
	if ($len > 0 && is_numeric($val))
	{
		if (substr($val,-1) % 2)
			echo "The number ".$val." is odd\n";
		else
			echo "The number ".$val." is even\n";
	}
	else
		echo "'".$val."' is not a number\n";	
}
?>
