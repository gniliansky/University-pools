<?php
function ft_check($arr)
{
	if (is_null($arr) != TRUE)
	{
		$buf = $arr;
		sort($buf);
		foreach ($buf as $key => $value1) {
				if (strcmp($value1, $arr[$key]) !== 0)
					return (0);
		}
		return (1);
	}
}
function ft_is_sort($arr)
{
	return (ft_check($arr));
}
?>