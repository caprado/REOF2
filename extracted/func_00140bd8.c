void func_00140bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x20;                                            // 0x00140bd8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x140c10;                           // 0x00140be8: bnez $s0, 0x140c10
label_0x140bf0:
    /* nop */                                                   // 0x00140bf0: nop 
    /* nop */                                                   // 0x00140bf4: nop 
    /* nop */                                                   // 0x00140bf8: nop 
    /* nop */                                                   // 0x00140bfc: nop 
    /* nop */                                                   // 0x00140c00: nop 
    goto label_0x140bf0;                                        // 0x00140c04: b 0x140bf0
    /* nop */                                                   // 0x00140c08: nop 
    /* nop */                                                   // 0x00140c0c: nop 
label_0x140c10:
    func_0013ef30();  // 0x13ef18                                // 0x00140c10: jal 0x13ef18
    s1 = *(int32_t*)(s0);                                       // 0x00140c14: lw $s1, 0($s0)
    if (s1 <= 0) goto label_0x140c64;                           // 0x00140c18: blezl $s1, 0x140c64
    /* nop */                                                   // 0x00140c24: nop 
label_0x140c28:
    s0 = a1 + 0x10;                                             // 0x00140c28: addiu $s0, $a1, 0x10
    v0 = *(int8_t*)(s0);                                        // 0x00140c2c: lb $v0, 0($s0)
    /* bnezl $v0, 0x140c58 */                                   // 0x00140c30: bnezl $v0, 0x140c58
    s1 = s1 + -1;                                               // 0x00140c34: addiu $s1, $s1, -1
    v0 = *(int32_t*)((a1) + 0x14);                              // 0x00140c38: lw $v0, 0x14($a1)
    a2 = a1 + 0x18;                                             // 0x00140c3c: addiu $a2, $a1, 0x18
    a0 = g_00210004;  // Global at 0x00210004                   // 0x00140c40: lw $a0, 4($v0)
    v1 = *(int32_t*)(a0);                                       // 0x00140c44: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00140c48: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x00140c4c: jalr $v0
    a1 = *(int8_t*)((a1) + 0x11);                               // 0x00140c50: lb $a1, 0x11($a1)
    s1 = s1 + -1;                                               // 0x00140c54: addiu $s1, $s1, -1
    if (s1 != 0) goto label_0x140c28;                           // 0x00140c58: bnez $s1, 0x140c28
label_0x140c64:
    return func_0013ef80();  // Tail call                        // 0x00140c6c: j 0x13ef30
    sp = sp + 0x20;                                             // 0x00140c70: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00140c74: nop 
    sp = sp + -0x60;                                            // 0x00140c78: addiu $sp, $sp, -0x60
    s7 = 1;                                                     // 0x00140ca0: addiu $s7, $zero, 1
    func_0013ef30();  // 0x13ef18                                // 0x00140cb0: jal 0x13ef18
    s5 = s6 + 0x10;                                             // 0x00140cb4: addiu $s5, $s6, 0x10
    v0 = 0x21 << 16;                                            // 0x00140cb8: lui $v0, 0x21
    s1 = v0 + 0x90;                                             // 0x00140cbc: addiu $s1, $v0, 0x90
label_0x140cc0:
    v0 = g_00210090;  // Global at 0x00210090                   // 0x00140cc0: lb $v0, 0($s1)
    if (v0 != s7) goto label_0x140d44;                          // 0x00140cc4: bnel $v0, $s7, 0x140d44
    s3 = s3 + 1;                                                // 0x00140cc8: addiu $s3, $s3, 1
    v0 = s2 << 4;                                               // 0x00140ccc: sll $v0, $s2, 4
    s4 = 0x80;                                                  // 0x00140cd0: addiu $s4, $zero, 0x80
    goto label_0x140d10;                                        // 0x00140cd4: b 0x140d10
    s0 = v0 + s5;                                               // 0x00140cd8: addu $s0, $v0, $s5
    /* nop */                                                   // 0x00140cdc: nop 
    s2 = s2 + 1;                                                // 0x00140ce0: addiu $s2, $s2, 1
    v0 = g_0021009c;  // Global at 0x0021009c                   // 0x00140ce4: lbu $v0, 0xc($s1)
    v1 = g_002100a0;  // Global at 0x002100a0                   // 0x00140ce8: lw $v1, 0x10($s1)
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00140cec: sb $v0, 1($s0)
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00140cf0: sw $v1, 4($s0)
    v0 = g_00210092;  // Global at 0x00210092                   // 0x00140cf4: lhu $v0, 2($s1)
    *(uint16_t*)((s0) + 2) = v0;                                // 0x00140d08: sh $v0, 2($s0)
    s0 = s0 + 0x10;                                             // 0x00140d0c: addiu $s0, $s0, 0x10
label_0x140d10:
    if (s2 == s4) goto label_0x140d50;                          // 0x00140d10: beq $s2, $s4, 0x140d50
    a2 = 0x7fff << 16;                                          // 0x00140d14: lui $a2, 0x7fff
    a0 = g_00210094;  // Global at 0x00210094                   // 0x00140d18: lw $a0, 4($s1)
    a1 = g_0021009c;  // Global at 0x0021009c                   // 0x00140d1c: lw $a1, 0xc($s1)
    a2 = a2 | 0xffff;                                           // 0x00140d20: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(a0);                                       // 0x00140d24: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x18);                              // 0x00140d28: lw $v0, 0x18($v1)
    /* call function at address in v0 */                        // 0x00140d2c: jalr $v0
    v1 = local_4;                                               // 0x00140d34: lw $v1, 4($sp)
    /* bnezl $v1, 0x140ce0 */                                   // 0x00140d38: bnezl $v1, 0x140ce0
    *(uint8_t*)(s0) = 0;                                        // 0x00140d3c: sb $zero, 0($s0)
    s3 = s3 + 1;                                                // 0x00140d40: addiu $s3, $s3, 1
label_0x140d44:
    v0 = (s3 < 0x20) ? 1 : 0;                                   // 0x00140d44: slti $v0, $s3, 0x20
    if (v0 != 0) goto label_0x140cc0;                           // 0x00140d48: bnez $v0, 0x140cc0
    s1 = s1 + 0x14;                                             // 0x00140d4c: addiu $s1, $s1, 0x14
label_0x140d50:
    func_0013ef80();  // 0x13ef30                                // 0x00140d50: jal 0x13ef30
    /* nop */                                                   // 0x00140d54: nop 
    *(uint32_t*)(s6) = s2;                                      // 0x00140d58: sw $s2, 0($s6)
    return;                                                     // 0x00140d80: jr $ra
    sp = sp + 0x60;                                             // 0x00140d84: addiu $sp, $sp, 0x60
}