#!/usr/bin/php
<?php
function ft_split($val) {
	while (strpos($val, "  ") !== FALSE)
		$val = str_replace("  ", " ", $val);
	$val = trim($val);
	$arr = explode(" ", $val);
	sort($arr);
	if ($arr[0] === "")
		$arr = array_splice($arr, 1 , 1);
	return ($arr);
}

$arr = array_splice($argv, 1);
if ($argc >= 2)
{
	$str = implode(" ", $arr);
	$arr = ft_split($str);
	foreach ($arr as $key => $value) {
		echo $value."\n";
	}
}
?>