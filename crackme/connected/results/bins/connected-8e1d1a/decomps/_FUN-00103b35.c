
/* _FUN(net_pc*, packet*) */

void main::{lambda(net_pc*,packet*)#3}::_FUN(net_pc *param_1,packet *param_2)

{
  undefined2 *local_28;
  undefined8 local_20;
  undefined2 local_18;
  undefined1 uStack_16;
  undefined5 uStack_15;
  
  local_28 = &local_18;
  local_18 = 0x4b4f;
  local_20 = 2;
  uStack_16 = 0;
                    /* try { // try from 00103b5b to 00103b5f has its CatchHandler @ 00103b82 */
  net_pc::respond_to_packet(param_1,param_2,(string *)&local_28);
  if (local_28 != &local_18) {
    operator_delete(local_28,CONCAT53(uStack_15,CONCAT12(uStack_16,local_18)) + 1);
  }
  return;
}

