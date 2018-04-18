#!/usr/bin/php
<?php
function ft_split($val) {
	while (strpos($val, "  ") !== FALSE)
		$val = str_replace("  ", " ", $val);
	$val = trim($val);
	$arr = explode(" ", $val);
	if ($arr[0] === "")
		$arr = array_splice($arr, 1 , 1);
	return ($arr);
}

if ($argc >= 2)
{
	$str = $argv[1];
	$arr = ft_split($str);
	$str = $arr[0];
	$arr[count($arr)] = $str;
	$arr = array_splice($arr, 1);
	$str = implode(" ", $arr);
	echo $str."\n";
}
?>