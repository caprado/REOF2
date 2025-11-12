void func_0013dcc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013dcc0: addiu $sp, $sp, -0x10
    v0 = 0x21 << 16;                                            // 0x0013dcc4: lui $v0, 0x21
    v0 = v0 + -0x6180;                                          // 0x0013dcd0: addiu $v0, $v0, -0x6180
    t5 = s0 + 0x10;                                             // 0x0013dcd4: addiu $t5, $s0, 0x10
    v1 = 0x20 << 16;                                            // 0x0013dcd8: lui $v1, 0x20
    s1 = v1 + 0x6a98;                                           // 0x0013dce8: addiu $s1, $v1, 0x6a98
    t9 = 1;                                                     // 0x0013dcf0: addiu $t9, $zero, 1
    t8 = 2;                                                     // 0x0013dcf4: addiu $t8, $zero, 2
    t6 = v0 + 8;                                                // 0x0013dcf8: addiu $t6, $v0, 8
label_0x13dd00:
    v0 = *(int8_t*)(a3);                                        // 0x0013dd00: lb $v0, 0($a3)
    if (v0 != t9) goto label_0x13df54;                          // 0x0013dd04: bnel $v0, $t9, 0x13df54
    t7 = t7 + 1;                                                // 0x0013dd08: addiu $t7, $t7, 1
    t0 = 0x80;                                                  // 0x0013dd0c: addiu $t0, $zero, 0x80
    if (t2 == t0) goto label_0x13df68;                          // 0x0013dd10: beql $t2, $t0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013dd14: sw $t2, 0($s0)
    v1 = *(int8_t*)((a3) + 0x53);                               // 0x0013dd18: lb $v1, 0x53($a3)
    v0 = *(int8_t*)((a3) + 0x52);                               // 0x0013dd1c: lb $v0, 0x52($a3)
    if (v1 == v0) goto label_0x13dd4c;                          // 0x0013dd20: beq $v1, $v0, 0x13dd4c
    v0 = 8;                                                     // 0x0013dd24: addiu $v0, $zero, 8
    v1 = *(int32_t*)((a3) + 0x20);                              // 0x0013dd28: lw $v1, 0x20($a3)
    *(uint16_t*)(a2) = v0;                                      // 0x0013dd2c: sh $v0, 0($a2)
    t2 = t2 + 1;                                                // 0x0013dd30: addiu $t2, $t2, 1
    *(uint32_t*)((a2) + 4) = v1;                                // 0x0013dd34: sw $v1, 4($a2)
    v0 = *(int8_t*)((a3) + 0x53);                               // 0x0013dd38: lb $v0, 0x53($a3)
    *(uint32_t*)((a2) + 8) = v0;                                // 0x0013dd3c: sw $v0, 8($a2)
    a2 = a2 + 0x10;                                             // 0x0013dd40: addiu $a2, $a2, 0x10
    v0 = *(uint8_t*)((a3) + 0x53);                              // 0x0013dd44: lbu $v0, 0x53($a3)
    *(uint8_t*)((a3) + 0x52) = v0;                              // 0x0013dd48: sb $v0, 0x52($a3)
label_0x13dd4c:
    if (t2 == t0) goto label_0x13df64;                          // 0x0013dd4c: beq $t2, $t0, 0x13df64
    v0 = 0x100;                                                 // 0x0013dd50: addiu $v0, $zero, 0x100
    v1 = *(uint16_t*)((a3) + 0x24);                             // 0x0013dd54: lhu $v1, 0x24($a3)
    if (v1 != v0) goto label_0x13dd84;                          // 0x0013dd58: bne $v1, $v0, 0x13dd84
    /* nop */                                                   // 0x0013dd5c: nop 
    v0 = *(int32_t*)((a3) + 0x20);                              // 0x0013dd60: lw $v0, 0x20($a3)
    t2 = t2 + 1;                                                // 0x0013dd64: addiu $t2, $t2, 1
    *(uint16_t*)(a2) = t8;                                      // 0x0013dd68: sh $t8, 0($a2)
    *(uint32_t*)((a2) + 4) = v0;                                // 0x0013dd6c: sw $v0, 4($a2)
    v1 = *(int8_t*)((a3) + 0x24);                               // 0x0013dd70: lb $v1, 0x24($a3)
    *(uint32_t*)((a2) + 8) = v1;                                // 0x0013dd74: sw $v1, 8($a2)
    a2 = a2 + 0x10;                                             // 0x0013dd78: addiu $a2, $a2, 0x10
    v0 = *(uint8_t*)((a3) + 0x24);                              // 0x0013dd7c: lbu $v0, 0x24($a3)
    *(uint8_t*)((a3) + 0x25) = v0;                              // 0x0013dd80: sb $v0, 0x25($a3)
label_0x13dd84:
    if (t2 == t0) goto label_0x13df68;                          // 0x0013dd84: beql $t2, $t0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013dd88: sw $t2, 0($s0)
    v1 = *(int32_t*)((a3) + 0x48);                              // 0x0013dd8c: lw $v1, 0x48($a3)
    v0 = *(int32_t*)((a3) + 0x4c);                              // 0x0013dd90: lw $v0, 0x4c($a3)
    if (v1 == v0) goto label_0x13ddbc;                          // 0x0013dd94: beq $v1, $v0, 0x13ddbc
    v0 = 0xa;                                                   // 0x0013dd98: addiu $v0, $zero, 0xa
    *(uint32_t*)((a2) + 8) = v1;                                // 0x0013dd9c: sw $v1, 8($a2)
    a0 = *(int32_t*)((a3) + 0x20);                              // 0x0013dda0: lw $a0, 0x20($a3)
    t2 = t2 + 1;                                                // 0x0013dda4: addiu $t2, $t2, 1
    v1 = *(int32_t*)((a3) + 0x48);                              // 0x0013dda8: lw $v1, 0x48($a3)
    *(uint16_t*)(a2) = v0;                                      // 0x0013ddac: sh $v0, 0($a2)
    *(uint32_t*)((a3) + 0x4c) = v1;                             // 0x0013ddb0: sw $v1, 0x4c($a3)
    *(uint32_t*)((a2) + 4) = a0;                                // 0x0013ddb4: sw $a0, 4($a2)
    a2 = a2 + 0x10;                                             // 0x0013ddb8: addiu $a2, $a2, 0x10
label_0x13ddbc:
    if (t2 == t0) goto label_0x13df68;                          // 0x0013ddbc: beql $t2, $t0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013ddc0: sw $t2, 0($s0)
    v1 = *(int8_t*)((a3) + 0x26);                               // 0x0013ddc4: lb $v1, 0x26($a3)
    v0 = *(int8_t*)((a3) + 0x27);                               // 0x0013ddc8: lb $v0, 0x27($a3)
    if (v1 == v0) goto label_0x13ddf8;                          // 0x0013ddcc: beq $v1, $v0, 0x13ddf8
    v0 = 3;                                                     // 0x0013ddd0: addiu $v0, $zero, 3
    v1 = *(int32_t*)((a3) + 0x20);                              // 0x0013ddd4: lw $v1, 0x20($a3)
    *(uint16_t*)(a2) = v0;                                      // 0x0013ddd8: sh $v0, 0($a2)
    t2 = t2 + 1;                                                // 0x0013dddc: addiu $t2, $t2, 1
    *(uint32_t*)((a2) + 4) = v1;                                // 0x0013dde0: sw $v1, 4($a2)
    v0 = *(int8_t*)((a3) + 0x26);                               // 0x0013dde4: lb $v0, 0x26($a3)
    *(uint32_t*)((a2) + 8) = v0;                                // 0x0013dde8: sw $v0, 8($a2)
    a2 = a2 + 0x10;                                             // 0x0013ddec: addiu $a2, $a2, 0x10
    v0 = *(uint8_t*)((a3) + 0x26);                              // 0x0013ddf0: lbu $v0, 0x26($a3)
    *(uint8_t*)((a3) + 0x27) = v0;                              // 0x0013ddf4: sb $v0, 0x27($a3)
label_0x13ddf8:
    if (t2 == t0) goto label_0x13df68;                          // 0x0013ddf8: beql $t2, $t0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013ddfc: sw $t2, 0($s0)
    v1 = *(int32_t*)((a3) + 0x28);                              // 0x0013de00: lw $v1, 0x28($a3)
    v0 = *(int32_t*)((a3) + 0x2c);                              // 0x0013de04: lw $v0, 0x2c($a3)
    if (v1 == v0) goto label_0x13de30;                          // 0x0013de08: beq $v1, $v0, 0x13de30
    v0 = 4;                                                     // 0x0013de0c: addiu $v0, $zero, 4
    *(uint32_t*)((a2) + 8) = v1;                                // 0x0013de10: sw $v1, 8($a2)
    a0 = *(int32_t*)((a3) + 0x20);                              // 0x0013de14: lw $a0, 0x20($a3)
    t2 = t2 + 1;                                                // 0x0013de18: addiu $t2, $t2, 1
    v1 = *(int32_t*)((a3) + 0x28);                              // 0x0013de1c: lw $v1, 0x28($a3)
    *(uint16_t*)(a2) = v0;                                      // 0x0013de20: sh $v0, 0($a2)
    *(uint32_t*)((a3) + 0x2c) = v1;                             // 0x0013de24: sw $v1, 0x2c($a3)
    *(uint32_t*)((a2) + 4) = a0;                                // 0x0013de28: sw $a0, 4($a2)
    a2 = a2 + 0x10;                                             // 0x0013de2c: addiu $a2, $a2, 0x10
label_0x13de30:
    if (t2 == t0) goto label_0x13df68;                          // 0x0013de30: beql $t2, $t0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013de34: sw $t2, 0($s0)
    v1 = *(int32_t*)((a3) + 0x30);                              // 0x0013de38: lw $v1, 0x30($a3)
    v0 = *(int32_t*)((a3) + 0x34);                              // 0x0013de3c: lw $v0, 0x34($a3)
    if (v1 == v0) goto label_0x13de78;                          // 0x0013de40: beq $v1, $v0, 0x13de78
    v0 = v1 << 2;                                               // 0x0013de44: sll $v0, $v1, 2
    a1 = *(int32_t*)((a3) + 0x20);                              // 0x0013de48: lw $a1, 0x20($a3)
    v0 = s1 - v0;                                               // 0x0013de4c: subu $v0, $s1, $v0
    a0 = 5;                                                     // 0x0013de50: addiu $a0, $zero, 5
    v1 = g_00209e80;  // Global at 0x00209e80                   // 0x0013de54: lw $v1, 0($v0)
    t2 = t2 + 1;                                                // 0x0013de58: addiu $t2, $t2, 1
    *(uint32_t*)((a2) + 8) = 0;                                 // 0x0013de5c: sw $zero, 8($a2)
    *(uint32_t*)((a2) + 0xc) = v1;                              // 0x0013de60: sw $v1, 0xc($a2)
    *(uint16_t*)(a2) = a0;                                      // 0x0013de64: sh $a0, 0($a2)
    v0 = *(int32_t*)((a3) + 0x30);                              // 0x0013de68: lw $v0, 0x30($a3)
    *(uint32_t*)((a2) + 4) = a1;                                // 0x0013de6c: sw $a1, 4($a2)
    a2 = a2 + 0x10;                                             // 0x0013de70: addiu $a2, $a2, 0x10
    *(uint32_t*)((a3) + 0x34) = v0;                             // 0x0013de74: sw $v0, 0x34($a3)
label_0x13de78:
    if (t2 == t0) goto label_0x13df64;                          // 0x0013de78: beq $t2, $t0, 0x13df64
    v0 = 0x7f;                                                  // 0x0013de7c: addiu $v0, $zero, 0x7f
    if (t2 == v0) goto label_0x13df68;                          // 0x0013de80: beql $t2, $v0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013de84: sw $t2, 0($s0)
    v0 = *(int8_t*)((a3) + 0x26);                               // 0x0013de88: lb $v0, 0x26($a3)
    if (v0 <= 0) goto label_0x13df0c;                           // 0x0013de90: blez $v0, 0x13df0c
    t1 = *(uint8_t*)((a3) + 0x26);                              // 0x0013de94: lbu $t1, 0x26($a3)
    v0 = t2 << 4;                                               // 0x0013de98: sll $v0, $t2, 4
    t4 = 9;                                                     // 0x0013de9c: addiu $t4, $zero, 9
    a0 = v0 + t5;                                               // 0x0013dea0: addu $a0, $v0, $t5
    t0 = a3 + 0x40;                                             // 0x0013dea4: addiu $t0, $a3, 0x40
    a1 = t6 + 0x30;                                             // 0x0013dea8: addiu $a1, $t6, 0x30
    /* nop */                                                   // 0x0013deac: nop 
label_0x13deb0:
    v1 = g_00209eb8;  // Global at 0x00209eb8                   // 0x0013deb0: lw $v1, 0($a1)
    v0 = *(int32_t*)(t0);                                       // 0x0013deb4: lw $v0, 0($t0)
    if (v1 == v0) goto label_0x13def4;                          // 0x0013deb8: beq $v1, $v0, 0x13def4
    v0 = t1 << 0x18;                                            // 0x0013debc: sll $v0, $t1, 0x18
    *(uint32_t*)((a0) + 8) = t3;                                // 0x0013dec0: sw $t3, 8($a0)
    a2 = a2 + 0x10;                                             // 0x0013dec4: addiu $a2, $a2, 0x10
    v1 = *(int32_t*)((a3) + 0x20);                              // 0x0013dec8: lw $v1, 0x20($a3)
    t2 = t2 + 1;                                                // 0x0013decc: addiu $t2, $t2, 1
    v0 = g_00209eb8;  // Global at 0x00209eb8                   // 0x0013ded0: lw $v0, 0($a1)
    *(uint16_t*)(a0) = t4;                                      // 0x0013ded4: sh $t4, 0($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0013ded8: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 4) = v1;                                // 0x0013dedc: sw $v1, 4($a0)
    a0 = a0 + 0x10;                                             // 0x0013dee0: addiu $a0, $a0, 0x10
    v0 = g_00209eb8;  // Global at 0x00209eb8                   // 0x0013dee4: lw $v0, 0($a1)
    *(uint32_t*)(t0) = v0;                                      // 0x0013dee8: sw $v0, 0($t0)
    t1 = *(uint8_t*)((a3) + 0x26);                              // 0x0013deec: lbu $t1, 0x26($a3)
    v0 = t1 << 0x18;                                            // 0x0013def0: sll $v0, $t1, 0x18
label_0x13def4:
    t3 = t3 + 1;                                                // 0x0013def4: addiu $t3, $t3, 1
    v0 = v0 >> 0x18;                                            // 0x0013def8: sra $v0, $v0, 0x18
    t0 = t0 + 4;                                                // 0x0013defc: addiu $t0, $t0, 4
    v0 = (t3 < v0) ? 1 : 0;                                     // 0x0013df00: slt $v0, $t3, $v0
    if (v0 != 0) goto label_0x13deb0;                           // 0x0013df04: bnez $v0, 0x13deb0
    a1 = a1 + 4;                                                // 0x0013df08: addiu $a1, $a1, 4
label_0x13df0c:
    a0 = 0x80;                                                  // 0x0013df0c: addiu $a0, $zero, 0x80
    if (t2 == a0) goto label_0x13df68;                          // 0x0013df10: beql $t2, $a0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013df14: sw $t2, 0($s0)
    v0 = *(uint16_t*)((a3) + 0x24);                             // 0x0013df18: lhu $v0, 0x24($a3)
    if (v0 != t9) goto label_0x13df48;                          // 0x0013df1c: bne $v0, $t9, 0x13df48
    /* nop */                                                   // 0x0013df20: nop 
    v0 = *(int32_t*)((a3) + 0x20);                              // 0x0013df24: lw $v0, 0x20($a3)
    t2 = t2 + 1;                                                // 0x0013df28: addiu $t2, $t2, 1
    *(uint16_t*)(a2) = t8;                                      // 0x0013df2c: sh $t8, 0($a2)
    *(uint32_t*)((a2) + 4) = v0;                                // 0x0013df30: sw $v0, 4($a2)
    v1 = *(int8_t*)((a3) + 0x24);                               // 0x0013df34: lb $v1, 0x24($a3)
    *(uint32_t*)((a2) + 8) = v1;                                // 0x0013df38: sw $v1, 8($a2)
    a2 = a2 + 0x10;                                             // 0x0013df3c: addiu $a2, $a2, 0x10
    v0 = *(uint8_t*)((a3) + 0x24);                              // 0x0013df40: lbu $v0, 0x24($a3)
    *(uint8_t*)((a3) + 0x25) = v0;                              // 0x0013df44: sb $v0, 0x25($a3)
label_0x13df48:
    if (t2 == a0) goto label_0x13df68;                          // 0x0013df48: beql $t2, $a0, 0x13df68
    *(uint32_t*)(s0) = t2;                                      // 0x0013df4c: sw $t2, 0($s0)
    t7 = t7 + 1;                                                // 0x0013df50: addiu $t7, $t7, 1
label_0x13df54:
    t6 = t6 + 0x60;                                             // 0x0013df54: addiu $t6, $t6, 0x60
    v0 = (t7 < 0x10) ? 1 : 0;                                   // 0x0013df58: slti $v0, $t7, 0x10
    if (v0 != 0) goto label_0x13dd00;                           // 0x0013df5c: bnez $v0, 0x13dd00
    a3 = a3 + 0x60;                                             // 0x0013df60: addiu $a3, $a3, 0x60
label_0x13df64:
    *(uint32_t*)(s0) = t2;                                      // 0x0013df64: sw $t2, 0($s0)
label_0x13df68:
    return;                                                     // 0x0013df70: jr $ra
    sp = sp + 0x10;                                             // 0x0013df74: addiu $sp, $sp, 0x10
}