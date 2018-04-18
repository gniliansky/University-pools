<?php

abstract class Fighter {
	public $name;
	public function __construct($user_name) {
		$this->name = $user_name;
	}
	abstract public function fight($target);
}

?>