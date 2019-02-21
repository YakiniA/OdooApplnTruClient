//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("39", "Navigate to 'https://bludiamon.odoo.com/web/login'", "snapshot=Action_39.inf");
	truclient_step("40", "Log in", "snapshot=Action_40.inf");
	{
		truclient_step("40.1", "Click on Email textbox", "snapshot=Action_40.1.inf");
		truclient_step("40.2", "Type yakinilatha09@gmail.com in Email textbox", "snapshot=Action_40.2.inf");
		truclient_step("40.3", "Click on Password passwordbox", "snapshot=Action_40.3.inf");
		truclient_step("40.4", "Type *********** in Password passwordbox", "snapshot=Action_40.4.inf");
		truclient_step("40.5", "Click on Log in button", "snapshot=Action_40.5.inf");
	}
	truclient_step("42", "Click on Sales link", "snapshot=Action_42.inf");
	truclient_step("44", "Click on Create button", "snapshot=Action_44.inf");
	truclient_step("49", "Type Walgreens in Customer textbox", "snapshot=Action_49.inf");
	truclient_step("50", "Click on Customer Validity Payment...", "snapshot=Action_50.inf");
	truclient_step("52", "Click on Create", "snapshot=Action_52.inf");
	truclient_step("54", "Click on Validity textbox", "snapshot=Action_54.inf");
	truclient_step("56", "Click on We / 27 gridcell", "snapshot=Action_56.inf");
	truclient_step("58", "Click on Payment Terms textbox", "snapshot=Action_58.inf");
	truclient_step("60", "Select 45 Days from Payment Terms listbox", "snapshot=Action_60.inf");
	truclient_step("62", "Click on Add a product button", "snapshot=Action_62.inf");
	truclient_step("64", "Type Tylenol in Product / textbox", "snapshot=Action_64.inf");
	truclient_step("66", "Click on Unit Price / textbox", "snapshot=Action_66.inf");
	truclient_step("68", "Click on Create", "snapshot=Action_68.inf");
	truclient_step("70", "Click on Unit Price / textbox", "snapshot=Action_70.inf");
	truclient_step("72", "Type 10 in Unit Price / textbox", "snapshot=Action_72.inf");
	truclient_step("74", "Click on Save button", "snapshot=Action_74.inf");
	truclient_step("76", "Wait until Preview exists", "snapshot=Action_76.inf");
	truclient_step("77", "Click on Preview", "snapshot=Action_77.inf");
	truclient_step("78", "Click on Back to edit mode link", "snapshot=Action_78.inf");
	truclient_step("80", "Click on Confirm button", "snapshot=Action_80.inf");
	truclient_step("82", "Click on Cancel button", "snapshot=Action_82.inf");
	truclient_step("84", "Click on Set to Quotation", "snapshot=Action_84.inf");
	truclient_step("86", "Click on Print button", "snapshot=Action_86.inf");
	truclient_step("89", "Click on yakinilatha09@gmail.com button", "snapshot=Action_89.inf");
	truclient_step("91", "Click on Log out menuitem", "snapshot=Action_91.inf");

	return 0;
}
