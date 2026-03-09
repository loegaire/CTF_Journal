
/* WARNING: Unknown calling convention */
/* DWARF original prototype: void reflect.(*funcType).Field(int i, reflect.StructField ~r1) */

reflect_StructField reflect___funcType__Field(int i)

{
  int unaff_RBX;
  reflect_StructField return_value_alias_variable;
  int i_spill;
  
  FUN_0051a18b(&stack0x00000000);
  return_value_alias_variable =
       reflect___rtype__Field((reflect_rtype *)return_value_alias_variable.Name.str,unaff_RBX);
  return return_value_alias_variable;
}

