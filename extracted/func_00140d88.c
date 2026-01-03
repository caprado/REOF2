void func_00140d88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x20;                                            // 0x00140d88: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x140dc0;                           // 0x00140d98: bnez $s0, 0x140dc0
label_0x140da0:
    /* nop */                                                   // 0x00140da0: nop 
    /* nop */                                                   // 0x00140da4: nop 
    /* nop */                                                   // 0x00140da8: nop 
    /* nop */                                                   // 0x00140dac: nop 
    /* nop */                                                   // 0x00140db0: nop 
    goto label_0x140da0;                                        // 0x00140db4: b 0x140da0
    /* nop */                                                   // 0x00140db8: nop 
    /* nop */                                                   // 0x00140dbc: nop 
label_0x140dc0:
    func_0013ef18();  // 13ef18                                // 0x00140dc0: jal 0x13ef18
    s1 = *(int32_t*)(s0);                                       // 0x00140dc4: lw $s1, 0($s0)
    if (s1 <= 0) goto label_0x140e08;                           // 0x00140dc8: blezl $s1, 0x140e08
label_0x140dd0:
    v0 = *(int8_t*)((s0) + 0x10);                               // 0x00140dd0: lb $v0, 0x10($s0)
    /* bnezl $v0, 0x140dfc */                                   // 0x00140dd4: bnezl $v0, 0x140dfc
    s1 = s1 + -1;                                               // 0x00140dd8: addiu $s1, $s1, -1
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00140ddc: lw $v0, 0x14($s0)
    a2 = s0 + 0x18;                                             // 0x00140de0: addiu $a2, $s0, 0x18
    a0 = g_00210004;  // Global at 0x00210004                   // 0x00140de4: lw $a0, 4($v0)
    v1 = *(int32_t*)(a0);                                       // 0x00140de8: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00140dec: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00140df0: jalr $v0
    a1 = 1;                                                     // 0x00140df4: addiu $a1, $zero, 1
    s1 = s1 + -1;                                               // 0x00140df8: addiu $s1, $s1, -1
    if (s1 != 0) goto label_0x140dd0;                           // 0x00140dfc: bnez $s1, 0x140dd0
    s0 = s0 + 0x10;                                             // 0x00140e00: addiu $s0, $s0, 0x10
label_0x140e08:
    return func_0013ef80();  // Tail call                        // 0x00140e10: j 0x13ef30
    sp = sp + 0x20;                                             // 0x00140e14: addiu $sp, $sp, 0x20
    sp = sp + -0x60;                                            // 0x00140e18: addiu $sp, $sp, -0x60
    s7 = 1;                                                     // 0x00140e40: addiu $s7, $zero, 1
    func_0013ef18();  // 13ef18                                // 0x00140e50: jal 0x13ef18
    s5 = s6 + 0x10;                                             // 0x00140e54: addiu $s5, $s6, 0x10
    v0 = 0x21 << 16;                                            // 0x00140e58: lui $v0, 0x21
    s1 = v0 + 0x90;                                             // 0x00140e5c: addiu $s1, $v0, 0x90
label_0x140e60:
    v0 = g_00210090;  // Global at 0x00210090                   // 0x00140e60: lb $v0, 0($s1)
    if (v0 != s7) goto label_0x140ee4;                          // 0x00140e64: bnel $v0, $s7, 0x140ee4
    s3 = s3 + 1;                                                // 0x00140e68: addiu $s3, $s3, 1
    v0 = s2 << 4;                                               // 0x00140e6c: sll $v0, $s2, 4
    s4 = 0x80;                                                  // 0x00140e70: addiu $s4, $zero, 0x80
    goto label_0x140eb0;                                        // 0x00140e74: b 0x140eb0
    s0 = v0 + s5;                                               // 0x00140e78: addu $s0, $v0, $s5
    /* nop */                                                   // 0x00140e7c: nop 
    s2 = s2 + 1;                                                // 0x00140e80: addiu $s2, $s2, 1
    v0 = g_0021009c;  // Global at 0x0021009c                   // 0x00140e84: lbu $v0, 0xc($s1)
    v1 = g_002100a0;  // Global at 0x002100a0                   // 0x00140e88: lw $v1, 0x10($s1)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00140e8c: sb $v0, 1($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00140e90: sw $v1, 4($s0)
    v0 = g_00210092;  // Global at 0x00210092                   // 0x00140e94: lhu $v0, 2($s1)
    *(uint16_t*)((s0) + 2) = v0;                                // 0x00140ea8: sh $v0, 2($s0)
    s0 = s0 + 0x10;                                             // 0x00140eac: addiu $s0, $s0, 0x10
label_0x140eb0:
    if (s2 == s4) goto label_0x140ef0;                          // 0x00140eb0: beq $s2, $s4, 0x140ef0
    a2 = 0x7fff << 16;                                          // 0x00140eb4: lui $a2, 0x7fff
    a0 = g_00210094;  // Global at 0x00210094                   // 0x00140eb8: lw $a0, 4($s1)
    a1 = g_0021009c;  // Global at 0x0021009c                   // 0x00140ebc: lw $a1, 0xc($s1)
    a2 = a2 | 0xffff;                                           // 0x00140ec0: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(a0);                                       // 0x00140ec4: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00140ec8: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00140ecc: jalr $v0
    v1 = local_4;                                               // 0x00140ed4: lw $v1, 4($sp)
    /* bnezl $v1, 0x140e80 */                                   // 0x00140ed8: bnezl $v1, 0x140e80
    *(uint8_t*)(s0) = 0;                                        // 0x00140edc: sb $zero, 0($s0)
    s3 = s3 + 1;                                                // 0x00140ee0: addiu $s3, $s3, 1
label_0x140ee4:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x00140ee4: slti $v0, $s3, 0x20
    if (v0 != 0) goto label_0x140e60;                           // 0x00140ee8: bnez $v0, 0x140e60
    s1 = s1 + 0x14;                                             // 0x00140eec: addiu $s1, $s1, 0x14
label_0x140ef0:
    func_0013ef30();  // 13ef30                                // 0x00140ef0: jal 0x13ef30
    /* nop */                                                   // 0x00140ef4: nop 
    *(uint32_t*)(s6) = s2;                                      // 0x00140ef8: sw $s2, 0($s6)
    return;                                                     // 0x00140f20: jr $ra
    sp = sp + 0x60;                                             // 0x00140f24: addiu $sp, $sp, 0x60
}