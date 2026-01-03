void func_0019da50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_a0, local_bc, local_c0;
    
    sp = sp + -0x110;                                           // 0x0019da50: addiu $sp, $sp, -0x110
    /* FPU: dps.w.ph $ac0, $sp, $s7 */                          // 0x0019da5c: dps.w.ph $ac0, $sp, $s7
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x0019da64: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0019da70: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019da7c: addu.qb $zero, $sp, $s1
    local_bc = a2;                                              // 0x0019da84: sw $a2, 0xbc($sp)
    a0 = *(int32_t*)((a1) + 8);                                 // 0x0019da88: lw $a0, 8($a1)
    thunk_func_0018dab0();  // 18dab0                          // 0x0019da8c: jal 0x18dab0
    a1 = 2;                                                     // 0x0019da90: addiu $a1, $zero, 2
    *(uint32_t*)((s4) + 0x24) = v0;                             // 0x0019da94: sw $v0, 0x24($s4)
    func_0018db00();  // 18db00                                // 0x0019da98: jal 0x18db00
    a0 = *(int32_t*)((s4) + 0x24);                              // 0x0019da9c: lw $a0, 0x24($s4)
    v1 = *(int32_t*)((s5) + 0x14);                              // 0x0019daa0: lw $v1, 0x14($s5)
    v0 = sp + 0xd4;                                             // 0x0019daa8: addiu $v0, $sp, 0xd4
    s6 = sp + 0xd0;                                             // 0x0019daac: addiu $s6, $sp, 0xd0
    s7 = sp + 0xdc;                                             // 0x0019dab0: addiu $s7, $sp, 0xdc
    local_a0 = 0;                                               // 0x0019dab4: sw $zero, 0xa0($sp)
    *(uint32_t*)(v0) = v1;                                      // 0x0019dab8: sw $v1, 0($v0)
    v0 = *(int32_t*)(s5);                                       // 0x0019dabc: lw $v0, 0($s5)
    local_c0 = v0;                                              // 0x0019dac0: sw $v0, 0xc0($sp)
    s3 = *(int16_t*)((s4) + 0x1a);                              // 0x0019dac4: lh $s3, 0x1a($s4)
    s2 = *(int16_t*)((s4) + 0x1c);                              // 0x0019dac8: lh $s2, 0x1c($s4)
    goto label_0x19ddfc;                                        // 0x0019dacc: b 0x19ddfc
    fp = sp + 0xf4;                                             // 0x0019dad0: addiu $fp, $sp, 0xf4
    v0 = sp + 0xc4;                                             // 0x0019dad4: addiu $v0, $sp, 0xc4
label_0x19dad8:
    *(uint32_t*)(v0) = s3;                                      // 0x0019dad8: sw $s3, 0($v0)
    v0 = sp + 0xc8;                                             // 0x0019dadc: addiu $v0, $sp, 0xc8
    *(uint32_t*)(v0) = s2;                                      // 0x0019dae0: sw $s2, 0($v0)
    v0 = sp + 0xc4;                                             // 0x0019dae4: addiu $v0, $sp, 0xc4
    v1 = *(int32_t*)(v0);                                       // 0x0019dae8: lw $v1, 0($v0)
    v0 = sp + 0xd4;                                             // 0x0019daec: addiu $v0, $sp, 0xd4
    v0 = *(int32_t*)(v0);                                       // 0x0019daf0: lw $v0, 0($v0)
    /* multiply: v1 * v0 -> hi:lo */                            // 0x0019daf4: mult $ac3, $v1, $v0
    v0 = sp + 0xcc;                                             // 0x0019daf8: addiu $v0, $sp, 0xcc
    *(uint32_t*)(v0) = v1;                                      // 0x0019dafc: sw $v1, 0($v0)
    v1 = *(int32_t*)((s4) + 0x20);                              // 0x0019db00: lw $v1, 0x20($s4)
    if (v1 == 0) goto label_0x19dd54;                           // 0x0019db04: beqz $v1, 0x19dd54
    t2 = 1;                                                     // 0x0019db0c: addiu $t2, $zero, 1
    if (v1 == t2) goto label_0x19dcbc;                          // 0x0019db10: beq $v1, $t2, 0x19dcbc
    /* nop */                                                   // 0x0019db14: nop 
    v0 = 2;                                                     // 0x0019db18: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19dc18;                          // 0x0019db1c: beq $v1, $v0, 0x19dc18
    v0 = 0x13;                                                  // 0x0019db24: addiu $v0, $zero, 0x13
    if (v1 == v0) goto label_0x19dbb4;                          // 0x0019db28: beq $v1, $v0, 0x19dbb4
    /* nop */                                                   // 0x0019db2c: nop 
    v0 = 0x14;                                                  // 0x0019db30: addiu $v0, $zero, 0x14
    if (v1 == v0) goto label_0x19db50;                          // 0x0019db34: beq $v1, $v0, 0x19db50
    /* nop */                                                   // 0x0019db38: nop 
    a0 = 0x23 << 16;                                            // 0x0019db3c: lui $a0, 0x23
    func_001a0760();  // 1a0760                                // 0x0019db40: jal 0x1a0760
    a0 = &str_0022a5c0;  // "acrout.txt"                        // 0x0019db44: addiu $a0, $a0, -0x5a40
    goto label_0x19dde4;                                        // 0x0019db48: b 0x19dde4
    v0 = local_a0;                                              // 0x0019db4c: lw $v0, 0xa0($sp)
label_0x19db50:
    v0 = *(int8_t*)((s4) + 0x36);                               // 0x0019db50: lb $v0, 0x36($s4)
    /* multiply: s3 * s2 -> hi:lo */                            // 0x0019db54: mult $ac3, $s3, $s2
    if (v0 != 0) goto label_0x19db78;                           // 0x0019db58: bnez $v0, 0x19db78
    s0 = v1 >> 1;                                               // 0x0019db5c: sra $s0, $v1, 1
    a2 = *(int32_t*)((s4) + 8);                                 // 0x0019db60: lw $a2, 8($s4)
    a1 = *(int32_t*)((s5) + 0x10);                              // 0x0019db64: lw $a1, 0x10($s5)
    func_0018da10();  // 18da10                                // 0x0019db68: jal 0x18da10
    goto label_0x19dde0;                                        // 0x0019db70: b 0x19dde0
    /* nop */                                                   // 0x0019db74: nop 
label_0x19db78:
    func_001a0a00();  // 1a0a00                                // 0x0019db78: jal 0x1a0a00
    *(uint32_t*)(s6) = v0;                                      // 0x0019db80: sw $v0, 0($s6)
    a0 = *(int32_t*)(s6);                                       // 0x0019db84: lw $a0, 0($s6)
    a1 = *(int32_t*)((s5) + 0x10);                              // 0x0019db88: lw $a1, 0x10($s5)
    func_0018da10();  // 18da10                                // 0x0019db8c: jal 0x18da10
    a2 = *(int32_t*)(s6);                                       // 0x0019db94: lw $a2, 0($s6)
    func_0019e160();  // 19e160                                // 0x0019dba4: jal 0x19e160
    goto label_0x19dde0;                                        // 0x0019dbac: b 0x19dde0
    /* nop */                                                   // 0x0019dbb0: nop 
label_0x19dbb4:
    v0 = *(int8_t*)((s4) + 0x36);                               // 0x0019dbb4: lb $v0, 0x36($s4)
    if (v0 != 0) goto label_0x19dbd8;                           // 0x0019dbb8: bnez $v0, 0x19dbd8
    a2 = *(int32_t*)((s4) + 8);                                 // 0x0019dbc0: lw $a2, 8($s4)
    a1 = *(int32_t*)((s5) + 0x10);                              // 0x0019dbc4: lw $a1, 0x10($s5)
    func_0018da10();  // 18da10                                // 0x0019dbc8: jal 0x18da10
    goto label_0x19dde0;                                        // 0x0019dbd0: b 0x19dde0
    /* nop */                                                   // 0x0019dbd4: nop 
label_0x19dbd8:
    func_001a0a00();  // 1a0a00                                // 0x0019dbd8: jal 0x1a0a00
    *(uint32_t*)(s6) = v0;                                      // 0x0019dbe0: sw $v0, 0($s6)
    a0 = *(int32_t*)(s6);                                       // 0x0019dbe4: lw $a0, 0($s6)
    a1 = *(int32_t*)((s5) + 0x10);                              // 0x0019dbe8: lw $a1, 0x10($s5)
    func_0018da10();  // 18da10                                // 0x0019dbec: jal 0x18da10
    a2 = *(int32_t*)(s6);                                       // 0x0019dbf4: lw $a2, 0($s6)
    func_0019e160();  // 19e160                                // 0x0019dc04: jal 0x19e160
    t0 = 1;                                                     // 0x0019dc08: addiu $t0, $zero, 1
    goto label_0x19dde0;                                        // 0x0019dc0c: b 0x19dde0
    /* nop */                                                   // 0x0019dc10: nop 
label_0x19dc18:
    *(uint32_t*)(s6) = s1;                                      // 0x0019dc18: sw $s1, 0($s6)
    t1 = 5;                                                     // 0x0019dc1c: addiu $t1, $zero, 5
    v0 = sp + 0xd8;                                             // 0x0019dc20: addiu $v0, $sp, 0xd8
    *(uint32_t*)(v0) = t1;                                      // 0x0019dc24: sw $t1, 0($v0)
    t0 = 0xa;                                                   // 0x0019dc28: addiu $t0, $zero, 0xa
    v1 = 0x1f;                                                  // 0x0019dc2c: addiu $v1, $zero, 0x1f
    *(uint32_t*)(s7) = t0;                                      // 0x0019dc30: sw $t0, 0($s7)
    s0 = a0 << 1;                                               // 0x0019dc34: sll $s0, $a0, 1
    a1 = sp + 0xe8;                                             // 0x0019dc38: addiu $a1, $sp, 0xe8
    a0 = sp + 0xe0;                                             // 0x0019dc3c: addiu $a0, $sp, 0xe0
    a2 = sp + 0xec;                                             // 0x0019dc40: addiu $a2, $sp, 0xec
    str_0022a5c0 = v1;  // Global at 0x0022a5c0                 // 0x0019dc44: sw $v1, 0($a0)
    a3 = sp + 0xf0;                                             // 0x0019dc48: addiu $a3, $sp, 0xf0
    a0 = sp + 0xe4;                                             // 0x0019dc4c: addiu $a0, $sp, 0xe4
    t3 = sp + 0xf8;                                             // 0x0019dc50: addiu $t3, $sp, 0xf8
    str_0022a5c0 = t1;  // Global at 0x0022a5c0                 // 0x0019dc54: sw $t1, 0($a0)
    v0 = 0xf;                                                   // 0x0019dc58: addiu $v0, $zero, 0xf
    *(uint32_t*)(a1) = t1;                                      // 0x0019dc5c: sw $t1, 0($a1)
    *(uint32_t*)(a2) = v1;                                      // 0x0019dc64: sw $v1, 0($a2)
    a1 = sp + 0xc0;                                             // 0x0019dc68: addiu $a1, $sp, 0xc0
    *(uint32_t*)(a3) = t1;                                      // 0x0019dc6c: sw $t1, 0($a3)
    a3 = local_bc;                                              // 0x0019dc74: lw $a3, 0xbc($sp)
    *(uint32_t*)(fp) = 0;                                       // 0x0019dc78: sw $zero, 0($fp)
    *(uint32_t*)(t3) = v1;                                      // 0x0019dc7c: sw $v1, 0($t3)
    t3 = sp + 0xfc;                                             // 0x0019dc80: addiu $t3, $sp, 0xfc
    *(uint32_t*)(t3) = t2;                                      // 0x0019dc84: sw $t2, 0($t3)
    t3 = sp + 0x100;                                            // 0x0019dc88: addiu $t3, $sp, 0x100
    *(uint32_t*)(t3) = v0;                                      // 0x0019dc8c: sw $v0, 0($t3)
    v0 = sp + 0x104;                                            // 0x0019dc90: addiu $v0, $sp, 0x104
    *(uint32_t*)(v0) = t2;                                      // 0x0019dc94: sw $t2, 0($v0)
    *(uint32_t*)(s7) = 0;                                       // 0x0019dc98: sw $zero, 0($s7)
    v0 = sp + 0xe4;                                             // 0x0019dc9c: addiu $v0, $sp, 0xe4
    *(uint32_t*)(fp) = t0;                                      // 0x0019dca0: sw $t0, 0($fp)
    *(uint32_t*)(v0) = t1;                                      // 0x0019dca4: sw $t1, 0($v0)
    v0 = sp + 0xec;                                             // 0x0019dca8: addiu $v0, $sp, 0xec
    func_0019de50();  // 19de50                                // 0x0019dcac: jal 0x19de50
    *(uint32_t*)(v0) = v1;                                      // 0x0019dcb0: sw $v1, 0($v0)
    goto label_0x19dde0;                                        // 0x0019dcb4: b 0x19dde0
    /* nop */                                                   // 0x0019dcb8: nop 
label_0x19dcbc:
    *(uint32_t*)(s6) = s1;                                      // 0x0019dcbc: sw $s1, 0($s6)
    t1 = 8;                                                     // 0x0019dcc0: addiu $t1, $zero, 8
    v1 = sp + 0xd8;                                             // 0x0019dcc4: addiu $v1, $sp, 0xd8
    v0 = 0x10;                                                  // 0x0019dcc8: addiu $v0, $zero, 0x10
    *(uint32_t*)(v1) = t1;                                      // 0x0019dccc: sw $t1, 0($v1)
    t0 = 0xff;                                                  // 0x0019dcd0: addiu $t0, $zero, 0xff
    *(uint32_t*)(s7) = v0;                                      // 0x0019dcd4: sw $v0, 0($s7)
    v1 = sp + 0xe0;                                             // 0x0019dcd8: addiu $v1, $sp, 0xe0
    *(uint32_t*)(v1) = t0;                                      // 0x0019dcdc: sw $t0, 0($v1)
    v1 = sp + 0xe4;                                             // 0x0019dce4: addiu $v1, $sp, 0xe4
    *(uint32_t*)(v1) = t1;                                      // 0x0019dcec: sw $t1, 0($v1)
    v1 = sp + 0xe8;                                             // 0x0019dcf4: addiu $v1, $sp, 0xe8
    *(uint32_t*)(v1) = t1;                                      // 0x0019dcf8: sw $t1, 0($v1)
    s0 = a1 << 2;                                               // 0x0019dcfc: sll $s0, $a1, 2
    v1 = sp + 0xec;                                             // 0x0019dd00: addiu $v1, $sp, 0xec
    a1 = sp + 0xc0;                                             // 0x0019dd04: addiu $a1, $sp, 0xc0
    *(uint32_t*)(v1) = t0;                                      // 0x0019dd08: sw $t0, 0($v1)
    a3 = local_bc;                                              // 0x0019dd0c: lw $a3, 0xbc($sp)
    v1 = sp + 0xf0;                                             // 0x0019dd10: addiu $v1, $sp, 0xf0
    *(uint32_t*)(v1) = t1;                                      // 0x0019dd14: sw $t1, 0($v1)
    *(uint32_t*)(fp) = 0;                                       // 0x0019dd18: sw $zero, 0($fp)
    v1 = sp + 0xf8;                                             // 0x0019dd1c: addiu $v1, $sp, 0xf8
    *(uint32_t*)(v1) = t0;                                      // 0x0019dd20: sw $t0, 0($v1)
    v1 = sp + 0xfc;                                             // 0x0019dd24: addiu $v1, $sp, 0xfc
    *(uint32_t*)(v1) = 0;                                       // 0x0019dd28: sw $zero, 0($v1)
    v1 = sp + 0x100;                                            // 0x0019dd2c: addiu $v1, $sp, 0x100
    *(uint32_t*)(v1) = 0;                                       // 0x0019dd30: sw $zero, 0($v1)
    v1 = sp + 0x104;                                            // 0x0019dd34: addiu $v1, $sp, 0x104
    *(uint32_t*)(v1) = 0;                                       // 0x0019dd38: sw $zero, 0($v1)
    *(uint32_t*)(s7) = 0;                                       // 0x0019dd3c: sw $zero, 0($s7)
    func_0019de50();  // 19de50                                // 0x0019dd40: jal 0x19de50
    *(uint32_t*)(fp) = v0;                                      // 0x0019dd44: sw $v0, 0($fp)
    goto label_0x19dde0;                                        // 0x0019dd48: b 0x19dde0
    /* nop */                                                   // 0x0019dd4c: nop 
label_0x19dd54:
    *(uint32_t*)(s6) = s1;                                      // 0x0019dd54: sw $s1, 0($s6)
    t1 = 8;                                                     // 0x0019dd58: addiu $t1, $zero, 8
    v0 = sp + 0xd8;                                             // 0x0019dd5c: addiu $v0, $sp, 0xd8
    *(uint32_t*)(v0) = t1;                                      // 0x0019dd60: sw $t1, 0($v0)
    t0 = 0x10;                                                  // 0x0019dd64: addiu $t0, $zero, 0x10
    v1 = 0xff;                                                  // 0x0019dd68: addiu $v1, $zero, 0xff
    *(uint32_t*)(s7) = t0;                                      // 0x0019dd6c: sw $t0, 0($s7)
    s0 = a0 << 2;                                               // 0x0019dd70: sll $s0, $a0, 2
    a1 = sp + 0xe8;                                             // 0x0019dd74: addiu $a1, $sp, 0xe8
    a0 = sp + 0xe0;                                             // 0x0019dd78: addiu $a0, $sp, 0xe0
    a2 = sp + 0xec;                                             // 0x0019dd7c: addiu $a2, $sp, 0xec
    str_0022a5c0 = v1;  // Global at 0x0022a5c0                 // 0x0019dd80: sw $v1, 0($a0)
    a3 = sp + 0xf0;                                             // 0x0019dd84: addiu $a3, $sp, 0xf0
    a0 = sp + 0xe4;                                             // 0x0019dd88: addiu $a0, $sp, 0xe4
    t2 = sp + 0xf8;                                             // 0x0019dd8c: addiu $t2, $sp, 0xf8
    str_0022a5c0 = t1;  // Global at 0x0022a5c0                 // 0x0019dd90: sw $t1, 0($a0)
    v0 = 0x18;                                                  // 0x0019dd94: addiu $v0, $zero, 0x18
    *(uint32_t*)(a1) = t1;                                      // 0x0019dd98: sw $t1, 0($a1)
    *(uint32_t*)(a2) = v1;                                      // 0x0019dda0: sw $v1, 0($a2)
    a1 = sp + 0xc0;                                             // 0x0019dda4: addiu $a1, $sp, 0xc0
    *(uint32_t*)(a3) = t1;                                      // 0x0019dda8: sw $t1, 0($a3)
    a3 = local_bc;                                              // 0x0019ddb0: lw $a3, 0xbc($sp)
    *(uint32_t*)(fp) = 0;                                       // 0x0019ddb4: sw $zero, 0($fp)
    *(uint32_t*)(t2) = v1;                                      // 0x0019ddb8: sw $v1, 0($t2)
    t2 = sp + 0xfc;                                             // 0x0019ddbc: addiu $t2, $sp, 0xfc
    *(uint32_t*)(t2) = t1;                                      // 0x0019ddc0: sw $t1, 0($t2)
    t1 = sp + 0x100;                                            // 0x0019ddc4: addiu $t1, $sp, 0x100
    *(uint32_t*)(t1) = v0;                                      // 0x0019ddc8: sw $v0, 0($t1)
    v0 = sp + 0x104;                                            // 0x0019ddcc: addiu $v0, $sp, 0x104
    *(uint32_t*)(v0) = v1;                                      // 0x0019ddd0: sw $v1, 0($v0)
    *(uint32_t*)(s7) = 0;                                       // 0x0019ddd4: sw $zero, 0($s7)
    func_0019de50();  // 19de50                                // 0x0019ddd8: jal 0x19de50
    *(uint32_t*)(fp) = t0;                                      // 0x0019dddc: sw $t0, 0($fp)
label_0x19dde0:
    v0 = local_a0;                                              // 0x0019dde0: lw $v0, 0xa0($sp)
label_0x19dde4:
    s1 = s1 + s0;                                               // 0x0019dde4: addu $s1, $s1, $s0
    s3 = s3 >> 1;                                               // 0x0019dde8: sra $s3, $s3, 1
    s2 = s2 >> 1;                                               // 0x0019ddec: sra $s2, $s2, 1
    s5 = s5 + 0x48;                                             // 0x0019ddf0: addiu $s5, $s5, 0x48
    v0 = v0 + 1;                                                // 0x0019ddf4: addiu $v0, $v0, 1
    local_a0 = v0;                                              // 0x0019ddf8: sw $v0, 0xa0($sp)
label_0x19ddfc:
    v1 = *(int32_t*)((s4) + 0x30);                              // 0x0019ddfc: lw $v1, 0x30($s4)
    v0 = local_a0;                                              // 0x0019de00: lw $v0, 0xa0($sp)
    v0 = ((unsigned)v0 < (unsigned)v1) ? 1 : 0;                 // 0x0019de04: sltu $v0, $v0, $v1
    if (v0 != 0) goto label_0x19dad8;                           // 0x0019de08: bnez $v0, 0x19dad8
    v0 = sp + 0xc4;                                             // 0x0019de0c: addiu $v0, $sp, 0xc4
    v0 = 1;                                                     // 0x0019de14: addiu $v0, $zero, 1
    /* FPU: xori.b $w2, $w0, 0xbe */                            // 0x0019de18: xori.b $w2, $w0, 0xbe
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x0019de20: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x0019de24: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0019de28: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019de30: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019de34: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019de38: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019de3c: jr $ra
    sp = sp + 0x110;                                            // 0x0019de40: addiu $sp, $sp, 0x110
}