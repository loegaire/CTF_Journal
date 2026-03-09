
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void unicode_init(void)

{
  runtime_hmap *unaff_RBX;
  int in_RDI;
  map_string__unicode_RangeTable *pphVar1;
  long in_FS_OFFSET;
  string s;
  string s_00;
  string s_01;
  string s_02;
  string s_03;
  string s_04;
  string s_05;
  string s_06;
  string s_07;
  string s_08;
  string s_09;
  string s_10;
  string s_11;
  string s_12;
  string s_13;
  string s_14;
  string s_15;
  string s_16;
  string s_17;
  string s_18;
  string s_19;
  string s_20;
  string s_21;
  string s_22;
  string s_23;
  string s_24;
  string s_25;
  string s_26;
  string s_27;
  string s_28;
  string s_29;
  string s_30;
  string s_31;
  string s_32;
  string s_33;
  string s_34;
  string s_35;
  string s_36;
  string s_37;
  string s_38;
  string s_39;
  string s_40;
  string s_41;
  string s_42;
  string s_43;
  string s_44;
  string s_45;
  string s_46;
  string s_47;
  string s_48;
  string s_49;
  string s_50;
  string s_51;
  string s_52;
  string s_53;
  string s_54;
  string s_55;
  string s_56;
  string s_57;
  string s_58;
  string s_59;
  string s_60;
  string s_61;
  string s_62;
  string s_63;
  string s_64;
  string s_65;
  string s_66;
  string s_67;
  string s_68;
  string s_69;
  string s_70;
  string s_71;
  string s_72;
  string s_73;
  string s_74;
  string s_75;
  string s_76;
  string s_77;
  string s_78;
  string s_79;
  string s_80;
  string s_81;
  string s_82;
  string s_83;
  string s_84;
  string s_85;
  string s_86;
  string s_87;
  string s_88;
  string s_89;
  string s_90;
  string s_91;
  string s_92;
  string s_93;
  string s_94;
  string s_95;
  string s_96;
  string s_97;
  string s_98;
  string s_99;
  string s_x00100;
  string s_x00101;
  string s_x00102;
  string s_x00103;
  string s_x00104;
  string s_x00105;
  string s_x00106;
  string s_x00107;
  string s_x00108;
  string s_x00109;
  string s_x00110;
  string s_x00111;
  string s_x00112;
  string s_x00113;
  string s_x00114;
  string s_x00115;
  string s_x00116;
  string s_x00117;
  string s_x00118;
  string s_x00119;
  string s_x00120;
  string s_x00121;
  string s_x00122;
  string s_x00123;
  string s_x00124;
  string s_x00125;
  string s_x00126;
  string s_x00127;
  string s_x00128;
  string s_x00129;
  string s_x00130;
  string s_x00131;
  string s_x00132;
  string s_x00133;
  string s_x00134;
  string s_x00135;
  string s_x00136;
  string s_x00137;
  string s_x00138;
  string s_x00139;
  string s_x00140;
  string s_x00141;
  string s_x00142;
  string s_x00143;
  string s_x00144;
  string s_x00145;
  string s_x00146;
  string s_x00147;
  string s_x00148;
  string s_x00149;
  string s_x00150;
  string s_x00151;
  string s_x00152;
  string s_x00153;
  string s_x00154;
  string s_x00155;
  string s_x00156;
  string s_x00157;
  string s_x00158;
  string s_x00159;
  string s_x00160;
  string s_x00161;
  string s_x00162;
  string s_x00163;
  string s_x00164;
  string s_x00165;
  string s_x00166;
  string s_x00167;
  string s_x00168;
  string s_x00169;
  string s_x00170;
  string s_x00171;
  string s_x00172;
  string s_x00173;
  string s_x00174;
  string s_x00175;
  string s_x00176;
  string s_x00177;
  string s_x00178;
  string s_x00179;
  string s_x00180;
  string s_x00181;
  string s_x00182;
  string s_x00183;
  string s_x00184;
  string s_x00185;
  string s_x00186;
  string s_x00187;
  string s_x00188;
  string s_x00189;
  string s_x00190;
  string s_x00191;
  string s_x00192;
  string s_x00193;
  string s_x00194;
  string s_x00195;
  string s_x00196;
  string s_x00197;
  string s_x00198;
  string s_x00199;
  string s_x00200;
  string s_x00201;
  string s_x00202;
  string s_x00203;
  string s_x00204;
  string s_x00205;
  string s_x00206;
  string s_x00207;
  string s_x00208;
  string s_x00209;
  string s_x00210;
  string s_x00211;
  string s_x00212;
  string s_x00213;
  string s_x00214;
  string s_x00215;
  string s_x00216;
  string s_x00217;
  string s_x00218;
  string s_x00219;
  string s_x00220;
  string s_x00221;
  string s_x00222;
  string s_x00223;
  string s_x00224;
  string s_x00225;
  string s_x00226;
  string s_x00227;
  string s_x00228;
  string s_x00229;
  string s_x00230;
  string s_x00231;
  string s_x00232;
  string s_x00233;
  string s_x00234;
  runtime_maptype *local_58;
  map_string__unicode_RangeTable *local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(*(long *)(in_FS_OFFSET + -8) + 0x10)) {
    runtime_morestack_noctxt();
  }
  runtime_makemap_small();
  s.len = in_RDI;
  s.str = &DAT_00236020;
  runtime_mapassign_faststr(local_58,unaff_RBX,s);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_C;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_00.len = (int)pphVar1;
  s_00.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_00);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cc;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_01.len = (int)pphVar1;
  s_01.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_01);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cf;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_02.len = (int)pphVar1;
  s_02.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_02);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Co;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_03.len = (int)pphVar1;
  s_03.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_03);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cs;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_04.len = (int)pphVar1;
  s_04.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_04);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_L;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_05.len = (int)pphVar1;
  s_05.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_05);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ll;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_06.len = (int)pphVar1;
  s_06.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_06);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lm;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_07.len = (int)pphVar1;
  s_07.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_07);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lo;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_08.len = (int)pphVar1;
  s_08.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_08);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lt;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_09.len = (int)pphVar1;
  s_09.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_09);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_10.len = (int)pphVar1;
  s_10.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_10);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_M;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_11.len = (int)pphVar1;
  s_11.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_11);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mc;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_12.len = (int)pphVar1;
  s_12.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_12);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Me;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_13.len = (int)pphVar1;
  s_13.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_13);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mn;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_14.len = (int)pphVar1;
  s_14.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_14);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_N;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_15.len = (int)pphVar1;
  s_15.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_15);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nd;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_16.len = (int)pphVar1;
  s_16.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_16);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nl;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_17.len = (int)pphVar1;
  s_17.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_17);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_No;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_18.len = (int)pphVar1;
  s_18.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_18);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_P;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_19.len = (int)pphVar1;
  s_19.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_19);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pc;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_20.len = (int)pphVar1;
  s_20.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_20);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pd;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_21.len = (int)pphVar1;
  s_21.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_21);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pe;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_22.len = (int)pphVar1;
  s_22.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_22);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pf;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_23.len = (int)pphVar1;
  s_23.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_23);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_24.len = (int)pphVar1;
  s_24.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_24);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Po;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_25.len = (int)pphVar1;
  s_25.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_25);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ps;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_26.len = (int)pphVar1;
  s_26.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_26);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_S;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_27.len = (int)pphVar1;
  s_27.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_27);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sc;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_28.len = (int)pphVar1;
  s_28.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_28);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sk;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_29.len = (int)pphVar1;
  s_29.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_29);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sm;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_30.len = (int)pphVar1;
  s_30.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_30);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_So;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_31.len = (int)pphVar1;
  s_31.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_31);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Z;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_32.len = (int)pphVar1;
  s_32.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_32);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Zl;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_33.len = (int)pphVar1;
  s_33.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_33);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Zp;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_34.len = (int)pphVar1;
  s_34.str = (uint8 *)local_58;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_34);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Zs;
    unicode_Categories = (map_string__unicode_RangeTable)local_58;
    pphVar1 = local_38;
  }
  else {
    runtime_gcWriteBarrier();
    pphVar1 = &unicode_Categories;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  s_35.len = (int)pphVar1;
  s_35.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_35);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Adlam;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_36.len = (int)pphVar1;
  s_36.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_36);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ahom;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_37.len = (int)pphVar1;
  s_37.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_37);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Anatolian_Hieroglyphs;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_38.len = (int)pphVar1;
  s_38.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_38);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Arabic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_39.len = (int)pphVar1;
  s_39.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_39);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Armenian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_40.len = (int)pphVar1;
  s_40.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_40);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Avestan;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_41.len = (int)pphVar1;
  s_41.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_41);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Balinese;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_42.len = (int)pphVar1;
  s_42.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_42);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bamum;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_43.len = (int)pphVar1;
  s_43.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_43);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bassa_Vah;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_44.len = (int)pphVar1;
  s_44.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_44);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Batak;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_45.len = (int)pphVar1;
  s_45.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_45);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bengali;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_46.len = (int)pphVar1;
  s_46.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_46);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bhaiksuki;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_47.len = (int)pphVar1;
  s_47.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_47);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bopomofo;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_48.len = (int)pphVar1;
  s_48.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_48);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Brahmi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_49.len = (int)pphVar1;
  s_49.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_49);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Braille;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_50.len = (int)pphVar1;
  s_50.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_50);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Buginese;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_51.len = (int)pphVar1;
  s_51.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_51);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Buhid;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_52.len = (int)pphVar1;
  s_52.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_52);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Canadian_Aboriginal;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_53.len = (int)pphVar1;
  s_53.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_53);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Carian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_54.len = (int)pphVar1;
  s_54.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_54);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Caucasian_Albanian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_55.len = (int)pphVar1;
  s_55.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_55);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Chakma;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_56.len = (int)pphVar1;
  s_56.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_56);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cham;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_57.len = (int)pphVar1;
  s_57.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_57);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cherokee;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_58.len = (int)pphVar1;
  s_58.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_58);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Chorasmian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_59.len = (int)pphVar1;
  s_59.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_59);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Common;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_60.len = (int)pphVar1;
  s_60.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_60);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Coptic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_61.len = (int)pphVar1;
  s_61.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_61);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cuneiform;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_62.len = (int)pphVar1;
  s_62.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_62);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cypriot;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_63.len = (int)pphVar1;
  s_63.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_63);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Cyrillic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_64.len = (int)pphVar1;
  s_64.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_64);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Deseret;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_65.len = (int)pphVar1;
  s_65.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_65);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Devanagari;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_66.len = (int)pphVar1;
  s_66.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_66);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Dives_Akuru;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_67.len = (int)pphVar1;
  s_67.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_67);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Dogra;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_68.len = (int)pphVar1;
  s_68.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_68);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Duployan;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_69.len = (int)pphVar1;
  s_69.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_69);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Egyptian_Hieroglyphs;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_70.len = (int)pphVar1;
  s_70.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_70);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Elbasan;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_71.len = (int)pphVar1;
  s_71.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_71);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Elymaic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_72.len = (int)pphVar1;
  s_72.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_72);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ethiopic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_73.len = (int)pphVar1;
  s_73.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_73);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Georgian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_74.len = (int)pphVar1;
  s_74.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_74);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Glagolitic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_75.len = (int)pphVar1;
  s_75.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_75);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Gothic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_76.len = (int)pphVar1;
  s_76.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_76);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Grantha;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_77.len = (int)pphVar1;
  s_77.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_77);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Greek;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_78.len = (int)pphVar1;
  s_78.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_78);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Gujarati;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_79.len = (int)pphVar1;
  s_79.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_79);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Gunjala_Gondi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_80.len = (int)pphVar1;
  s_80.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_80);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Gurmukhi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_81.len = (int)pphVar1;
  s_81.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_81);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Han;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_82.len = (int)pphVar1;
  s_82.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_82);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hangul;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_83.len = (int)pphVar1;
  s_83.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_83);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hanifi_Rohingya;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_84.len = (int)pphVar1;
  s_84.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_84);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hanunoo;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_85.len = (int)pphVar1;
  s_85.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_85);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hatran;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_86.len = (int)pphVar1;
  s_86.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_86);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hebrew;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_87.len = (int)pphVar1;
  s_87.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_87);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hiragana;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_88.len = (int)pphVar1;
  s_88.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_88);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Imperial_Aramaic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_89.len = (int)pphVar1;
  s_89.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_89);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Inherited;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_90.len = (int)pphVar1;
  s_90.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_90);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Inscriptional_Pahlavi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_91.len = (int)pphVar1;
  s_91.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_91);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Inscriptional_Parthian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_92.len = (int)pphVar1;
  s_92.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_92);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Javanese;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_93.len = (int)pphVar1;
  s_93.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_93);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Kaithi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_94.len = (int)pphVar1;
  s_94.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_94);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Kannada;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_95.len = (int)pphVar1;
  s_95.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_95);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Katakana;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_96.len = (int)pphVar1;
  s_96.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_96);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Kayah_Li;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_97.len = (int)pphVar1;
  s_97.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_97);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Kharoshthi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_98.len = (int)pphVar1;
  s_98.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_98);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Khitan_Small_Script;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_99.len = (int)pphVar1;
  s_99.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_99);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Khmer;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00100.len = (int)pphVar1;
  s_x00100.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00100);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Khojki;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00101.len = (int)pphVar1;
  s_x00101.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00101);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Khudawadi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00102.len = (int)pphVar1;
  s_x00102.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00102);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lao;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00103.len = (int)pphVar1;
  s_x00103.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00103);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Latin;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00104.len = (int)pphVar1;
  s_x00104.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00104);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lepcha;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00105.len = (int)pphVar1;
  s_x00105.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00105);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Limbu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00106.len = (int)pphVar1;
  s_x00106.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00106);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Linear_A;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00107.len = (int)pphVar1;
  s_x00107.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00107);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Linear_B;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00108.len = (int)pphVar1;
  s_x00108.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00108);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lisu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00109.len = (int)pphVar1;
  s_x00109.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00109);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lycian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00110.len = (int)pphVar1;
  s_x00110.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00110);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Lydian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00111.len = (int)pphVar1;
  s_x00111.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00111);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mahajani;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00112.len = (int)pphVar1;
  s_x00112.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00112);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Makasar;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00113.len = (int)pphVar1;
  s_x00113.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00113);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Malayalam;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00114.len = (int)pphVar1;
  s_x00114.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00114);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mandaic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00115.len = (int)pphVar1;
  s_x00115.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00115);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Manichaean;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00116.len = (int)pphVar1;
  s_x00116.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00116);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Marchen;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00117.len = (int)pphVar1;
  s_x00117.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00117);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Masaram_Gondi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00118.len = (int)pphVar1;
  s_x00118.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00118);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Medefaidrin;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00119.len = (int)pphVar1;
  s_x00119.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00119);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Meetei_Mayek;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00120.len = (int)pphVar1;
  s_x00120.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00120);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mende_Kikakui;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00121.len = (int)pphVar1;
  s_x00121.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00121);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Meroitic_Cursive;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00122.len = (int)pphVar1;
  s_x00122.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00122);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Meroitic_Hieroglyphs;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00123.len = (int)pphVar1;
  s_x00123.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00123);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Miao;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00124.len = (int)pphVar1;
  s_x00124.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00124);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Modi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00125.len = (int)pphVar1;
  s_x00125.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00125);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mongolian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00126.len = (int)pphVar1;
  s_x00126.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00126);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Mro;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00127.len = (int)pphVar1;
  s_x00127.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00127);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Multani;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00128.len = (int)pphVar1;
  s_x00128.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00128);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Myanmar;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00129.len = (int)pphVar1;
  s_x00129.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00129);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nabataean;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00130.len = (int)pphVar1;
  s_x00130.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00130);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nandinagari;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00131.len = (int)pphVar1;
  s_x00131.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00131);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_New_Tai_Lue;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00132.len = (int)pphVar1;
  s_x00132.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00132);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Newa;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00133.len = (int)pphVar1;
  s_x00133.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00133);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nko;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00134.len = (int)pphVar1;
  s_x00134.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00134);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nushu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00135.len = (int)pphVar1;
  s_x00135.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00135);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Nyiakeng_Puachue_Hmong;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00136.len = (int)pphVar1;
  s_x00136.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00136);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ogham;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00137.len = (int)pphVar1;
  s_x00137.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00137);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ol_Chiki;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00138.len = (int)pphVar1;
  s_x00138.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00138);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Hungarian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00139.len = (int)pphVar1;
  s_x00139.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00139);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Italic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00140.len = (int)pphVar1;
  s_x00140.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00140);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_North_Arabian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00141.len = (int)pphVar1;
  s_x00141.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00141);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Permic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00142.len = (int)pphVar1;
  s_x00142.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00142);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Persian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00143.len = (int)pphVar1;
  s_x00143.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00143);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Sogdian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00144.len = (int)pphVar1;
  s_x00144.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00144);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_South_Arabian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00145.len = (int)pphVar1;
  s_x00145.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00145);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Old_Turkic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00146.len = (int)pphVar1;
  s_x00146.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00146);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Oriya;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00147.len = (int)pphVar1;
  s_x00147.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00147);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Osage;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00148.len = (int)pphVar1;
  s_x00148.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00148);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Osmanya;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00149.len = (int)pphVar1;
  s_x00149.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00149);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pahawh_Hmong;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00150.len = (int)pphVar1;
  s_x00150.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00150);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Palmyrene;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00151.len = (int)pphVar1;
  s_x00151.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00151);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pau_Cin_Hau;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00152.len = (int)pphVar1;
  s_x00152.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00152);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Phags_Pa;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00153.len = (int)pphVar1;
  s_x00153.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00153);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Phoenician;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00154.len = (int)pphVar1;
  s_x00154.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00154);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Psalter_Pahlavi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00155.len = (int)pphVar1;
  s_x00155.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00155);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Rejang;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00156.len = (int)pphVar1;
  s_x00156.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00156);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Runic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00157.len = (int)pphVar1;
  s_x00157.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00157);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Samaritan;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00158.len = (int)pphVar1;
  s_x00158.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00158);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Saurashtra;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00159.len = (int)pphVar1;
  s_x00159.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00159);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sharada;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00160.len = (int)pphVar1;
  s_x00160.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00160);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Shavian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00161.len = (int)pphVar1;
  s_x00161.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00161);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Siddham;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00162.len = (int)pphVar1;
  s_x00162.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00162);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_SignWriting;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00163.len = (int)pphVar1;
  s_x00163.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00163);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sinhala;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00164.len = (int)pphVar1;
  s_x00164.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00164);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sogdian;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00165.len = (int)pphVar1;
  s_x00165.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00165);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sora_Sompeng;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00166.len = (int)pphVar1;
  s_x00166.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00166);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Soyombo;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00167.len = (int)pphVar1;
  s_x00167.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00167);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sundanese;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00168.len = (int)pphVar1;
  s_x00168.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00168);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Syloti_Nagri;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00169.len = (int)pphVar1;
  s_x00169.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00169);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Syriac;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00170.len = (int)pphVar1;
  s_x00170.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00170);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tagalog;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00171.len = (int)pphVar1;
  s_x00171.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00171);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tagbanwa;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00172.len = (int)pphVar1;
  s_x00172.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00172);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tai_Le;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00173.len = (int)pphVar1;
  s_x00173.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00173);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tai_Tham;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00174.len = (int)pphVar1;
  s_x00174.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00174);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tai_Viet;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00175.len = (int)pphVar1;
  s_x00175.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00175);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Takri;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00176.len = (int)pphVar1;
  s_x00176.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00176);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tamil;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00177.len = (int)pphVar1;
  s_x00177.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00177);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tangut;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00178.len = (int)pphVar1;
  s_x00178.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00178);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Telugu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00179.len = (int)pphVar1;
  s_x00179.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00179);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Thaana;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00180.len = (int)pphVar1;
  s_x00180.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00180);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Thai;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00181.len = (int)pphVar1;
  s_x00181.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00181);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tibetan;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00182.len = (int)pphVar1;
  s_x00182.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00182);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tifinagh;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00183.len = (int)pphVar1;
  s_x00183.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00183);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Tirhuta;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00184.len = (int)pphVar1;
  s_x00184.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00184);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ugaritic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00185.len = (int)pphVar1;
  s_x00185.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00185);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Vai;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00186.len = (int)pphVar1;
  s_x00186.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00186);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Wancho;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00187.len = (int)pphVar1;
  s_x00187.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00187);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Warang_Citi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00188.len = (int)pphVar1;
  s_x00188.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00188);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Yezidi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00189.len = (int)pphVar1;
  s_x00189.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00189);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Yi;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00190.len = (int)pphVar1;
  s_x00190.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00190);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Zanabazar_Square;
    unicode_Scripts = (map_string__unicode_RangeTable)&DAT_00236020;
    pphVar1 = local_38;
  }
  else {
    runtime_gcWriteBarrier();
    pphVar1 = &unicode_Scripts;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  s_x00191.len = (int)pphVar1;
  s_x00191.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00191);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_ASCII_Hex_Digit;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00192.len = (int)pphVar1;
  s_x00192.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00192);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Bidi_Control;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00193.len = (int)pphVar1;
  s_x00193.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00193);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Dash;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00194.len = (int)pphVar1;
  s_x00194.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00194);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Deprecated;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00195.len = (int)pphVar1;
  s_x00195.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00195);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Diacritic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00196.len = (int)pphVar1;
  s_x00196.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00196);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Extender;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00197.len = (int)pphVar1;
  s_x00197.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00197);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hex_Digit;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00198.len = (int)pphVar1;
  s_x00198.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00198);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Hyphen;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00199.len = (int)pphVar1;
  s_x00199.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00199);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_IDS_Binary_Operator;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00200.len = (int)pphVar1;
  s_x00200.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00200);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_IDS_Trinary_Operator;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00201.len = (int)pphVar1;
  s_x00201.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00201);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Ideographic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00202.len = (int)pphVar1;
  s_x00202.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00202);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Join_Control;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00203.len = (int)pphVar1;
  s_x00203.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00203);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Logical_Order_Exception;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00204.len = (int)pphVar1;
  s_x00204.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00204);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Noncharacter_Code_Point;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00205.len = (int)pphVar1;
  s_x00205.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00205);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Alphabetic;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00206.len = (int)pphVar1;
  s_x00206.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00206);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Default_Ignorable_Code_Point;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00207.len = (int)pphVar1;
  s_x00207.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00207);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Grapheme_Extend;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00208.len = (int)pphVar1;
  s_x00208.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00208);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_ID_Continue;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00209.len = (int)pphVar1;
  s_x00209.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00209);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_ID_Start;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00210.len = (int)pphVar1;
  s_x00210.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00210);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Lowercase;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00211.len = (int)pphVar1;
  s_x00211.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00211);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Math;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00212.len = (int)pphVar1;
  s_x00212.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00212);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Other_Uppercase;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00213.len = (int)pphVar1;
  s_x00213.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00213);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pattern_Syntax;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00214.len = (int)pphVar1;
  s_x00214.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00214);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Pattern_White_Space;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00215.len = (int)pphVar1;
  s_x00215.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00215);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Prepended_Concatenation_Mark;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00216.len = (int)pphVar1;
  s_x00216.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00216);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Quotation_Mark;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00217.len = (int)pphVar1;
  s_x00217.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00217);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Radical;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00218.len = (int)pphVar1;
  s_x00218.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00218);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Regional_Indicator;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00219.len = (int)pphVar1;
  s_x00219.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00219);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sentence_Terminal;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00220.len = (int)pphVar1;
  s_x00220.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00220);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Sentence_Terminal;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00221.len = (int)pphVar1;
  s_x00221.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00221);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Soft_Dotted;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00222.len = (int)pphVar1;
  s_x00222.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00222);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Terminal_Punctuation;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00223.len = (int)pphVar1;
  s_x00223.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00223);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Unified_Ideograph;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00224.len = (int)pphVar1;
  s_x00224.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00224);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_Variation_Selector;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00225.len = (int)pphVar1;
  s_x00225.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00225);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_White_Space;
    unicode_Properties = (map_string__unicode_RangeTable)&DAT_00236020;
    pphVar1 = local_38;
  }
  else {
    runtime_gcWriteBarrier();
    pphVar1 = &unicode_Properties;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  s_x00226.len = (int)pphVar1;
  s_x00226.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00226);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldL;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00227.len = (int)pphVar1;
  s_x00227.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00227);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldLl;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00228.len = (int)pphVar1;
  s_x00228.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00228);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldLt;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00229.len = (int)pphVar1;
  s_x00229.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00229);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldLu;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00230.len = (int)pphVar1;
  s_x00230.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00230);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldM;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00231.len = (int)pphVar1;
  s_x00231.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00231);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldMn;
    unicode_FoldCategory = (map_string__unicode_RangeTable)&DAT_00236020;
    pphVar1 = local_38;
  }
  else {
    runtime_gcWriteBarrier();
    pphVar1 = &unicode_FoldCategory;
    runtime_gcWriteBarrier();
  }
  runtime_makemap_small();
  s_x00232.len = (int)pphVar1;
  s_x00232.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00232);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldCommon;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00233.len = (int)pphVar1;
  s_x00233.str = &DAT_00236020;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00233);
  pphVar1 = local_38;
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldGreek;
  }
  else {
    runtime_gcWriteBarrier();
  }
  s_x00234.len = (int)pphVar1;
  s_x00234.str = &DAT_0028d460;
  runtime_mapassign_faststr((runtime_maptype *)&DAT_00236020,unaff_RBX,s_x00234);
  if (runtime_writeBarrier._0_4_ == 0) {
    *local_38 = (map_string__unicode_RangeTable)unicode_foldInherited;
    unicode_FoldScript = (map_string__unicode_RangeTable)&DAT_00236020;
  }
  else {
    runtime_gcWriteBarrier();
    runtime_gcWriteBarrier();
  }
  return;
}

