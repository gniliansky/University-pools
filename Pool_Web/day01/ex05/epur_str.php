#!/usr/bin/php
<?php
	if ($argc ===2)
	{
		$str = trim($argv[1], "\x00..\x20");
		$tub = array("\r", "\v", "\t", "\f");
		$str = str_replace($tub, " ", $str);
		while (strpos($str, "  ") !== FALSE)
			$str = str_replace("  ", " ", $str);
		echo $str."\n";
	}
?>