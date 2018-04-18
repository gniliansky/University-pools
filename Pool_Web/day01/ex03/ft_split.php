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
?>