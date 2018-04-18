<?php

class NightsWatch {
	public static $army;
	public function __construct() {
		self::$army = array();
	}
	public function recruit($obj) {
		array_push(self::$army, $obj);	
	}
	public function fight (){
		foreach (self::$army as $recruit) {
			if ($recruit instanceof IFighter) {
				$recruit->fight();
			}
		}
	}
}

?>